#include "main.h"
/**
 * print-diagonal - draws a diagonal line
 * @n: number of times the character should be printed
 * Return: always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}

	else
	{

	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{

			if (a == b)
				_putchar('\\');

			else if (b < a)
				_putchar(' ');
		}

		_putchar('\n');

	}
	}
}
