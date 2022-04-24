#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: pointer to an array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp

	i = 0;
	j = n - 1;
	while (i < j)

	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	i++;
	j--;
	}
}
