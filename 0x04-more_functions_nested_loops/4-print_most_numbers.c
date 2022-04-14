#include "main.h"
/**
 * print_most_numbers - prints number except 2 and 4
 *
 * Return: always 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{

		if (n != 50 && n != 52)
		{

		_putchar(n);

		}
	}

	putchar('\n');
}
