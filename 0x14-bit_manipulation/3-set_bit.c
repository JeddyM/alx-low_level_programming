#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to bit
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int size;

	size = sizeof(unsigned long int);

	if (index >= size * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);

}
