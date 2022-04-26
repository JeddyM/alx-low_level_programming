#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: square array entered
 * @size: size of the array n*n
 */
void print_diagsums(int *a, int size)
{
int i, j, sumd1 = 0, sumd2 = 0;

for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size - 1)
sumd1 += a[j], sumd2 += a[i];
printf("%d, %d\n", sumd1, sumd2);
}
