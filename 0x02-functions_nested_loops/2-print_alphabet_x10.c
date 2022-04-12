#include "main.h"

/**
 * main - Prints alphabet 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{

	int ch;
	int i;


	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);

		}
		i++;

		_putchar('\n');
		return (0);

	}
}
