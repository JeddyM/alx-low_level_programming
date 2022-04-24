#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: pointer to an array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	j--;
	}
}
