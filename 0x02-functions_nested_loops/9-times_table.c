#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: always 0 (success)
 */

void times_table(void)

{
	int i;
	int j, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			c = i * j;
			if ((c / 10) == 0)
			{
				if (j == 0)
				{
					_putchar ('0');
				}
				if (j != 0)
				{
					_putchar (' ');
					_putchar ((c % 10) + '0');
				}
				if (j < 9)
				{
				_putchar(',');
				_putchar (' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');

				if (j < 9)
				{
				_putchar(',');
				_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
