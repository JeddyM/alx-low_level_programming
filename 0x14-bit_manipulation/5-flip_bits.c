#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip to
 * get from one number to another
 * @m: number to flip n to
 * @n: number
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor, bit = 0;


	xor = n ^ m;

	while (xor > 0)
	{

		bit += xor & 1;
		xor >>= 1;
	}

	return (bits);

}
