#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @size:array size as a parameter
 * @cmp:pointer to the function to be used to compare values
 * @array: array to be given from main function
 *
 * Return: -1 no element matches else index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
		return (-1);
	if ((*cmp) != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{

			(*cmp)(array[i]);
			if ((*cmp)(array[i]) != 0)
				return (i);

		}
	}

	return (-1);
}
