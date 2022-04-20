#include "main.h"
/**
 * swap_int - swabs value of integers
 * @a: first integer
 * @b: second integer
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
