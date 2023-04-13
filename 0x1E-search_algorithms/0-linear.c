#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: -1 if array = null or value not in array 1 found value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
