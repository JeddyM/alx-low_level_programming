#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string to add in S1
 * @n:number of bytes to concatenate to S1
 * Return: pointer else NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	len++;
	conc = malloc(sizeof(char) * (len + 1));
	if (conc == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		conc[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		conc[len++] = s2[i];

	conc[len] = '\0';


	return (conc);
}
