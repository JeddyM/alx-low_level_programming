#include "main.h"
/**
 * print_line - prints a line
 *
 * Return: always 0 (success)
 */
void print_line(int n);
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
