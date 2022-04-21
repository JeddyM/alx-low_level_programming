#include "main.h"
#include <stdio.h>
/**
 * print _array - prints n elements of an array of integers
 * @a: integer pointer/ array
 * @n: integer
 */
void print _array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{

	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}	

	}
	printf("\n");
}
