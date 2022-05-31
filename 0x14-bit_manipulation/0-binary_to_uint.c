#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL and
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	if (b[i] != '0' || b[i] != '1')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{

		sum <<= 1;
		sum += b[i] - '0';
		i++;
	}
	return (sum);

}

