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
	for (i = 0; str[i]; i++);
	i++;

	str2 = malloc(sizeof(char) * i);


	for (i = 0; str[i] != '\0'; i++)
		str[i] = s[i];
	str1[i] = '\0';

	return (str2);
}
