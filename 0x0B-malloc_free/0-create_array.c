#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array of chars & initializes it with a specific char
 * @size: array size
 * @c: character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (0);

	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	return (s);

}
