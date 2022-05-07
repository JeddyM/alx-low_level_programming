#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string s
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
	len++;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[j] = s1[i];
		j++;
	for (i = 0; s2[i]; i++)
		s[j] = s2[i];
		j++;
return (s);
}
