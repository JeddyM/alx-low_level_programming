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
	int i;
	char *s;

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	s = malloc(sizeof(char) * i)
	for (i = 0; str[i] != '\0'; i++)
		str[i] = s[i];

	return (s);
}
