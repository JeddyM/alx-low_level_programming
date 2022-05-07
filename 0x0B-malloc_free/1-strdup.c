#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter
 * Return: pointer to string which is copy of str else NULL
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	/* find length*/
	for (i = 0; str[i]; i++)
	len++;

	str2 = malloc(sizeof(char) * len + 1);/*index starts at 0*/

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str[i] = str2[i];
	str2[len] = '\0';
	return (str2);
}
