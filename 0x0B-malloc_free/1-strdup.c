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
	char *str2;

	if (str == NULL)
		return (NULL);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str[i] = str2[i];
	str2 = malloc(sizeof(char) * i);
	return (str2);
}
