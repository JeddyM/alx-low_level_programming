#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{

	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
		_putchar((n / 10) + 48);
		}
		_putchar((n % 10) + 48);

	}

	_putchar('\n');
	}
}
