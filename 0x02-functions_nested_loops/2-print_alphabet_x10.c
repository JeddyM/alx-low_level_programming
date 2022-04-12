#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: always 0 success
 */

void print_alphabet_x10(void)
{

	char ch;
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

	}
}
