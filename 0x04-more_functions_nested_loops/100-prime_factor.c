#include <stdio.h>

/**
 * main - print prime factors of 612852475143
 *
 * Return: int
 */

int main(void)
{	
	unsigned long i, num, max;

	num = 612852475143;
	max = 1;

	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
		max = num;
		num = num / i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
