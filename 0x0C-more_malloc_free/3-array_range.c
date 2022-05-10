#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @max: maximum int
 * @min: minimum int
 * Return: pointer to newly created array else NULL if malloc fails
 */

int *array_range(int min, int max)
{

	int *r, size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	r = malloc(sizeof(int) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		r[i] = min++;

	return (r);
}
