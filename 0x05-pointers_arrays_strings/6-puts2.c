#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first char followed by new line
 * @str: string pointer
 * Return void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j++])
	{
	i++;
	}

	for (j = 0; j < i; i += 2)
	{
	_putchar(*(str + j));
	}
	_putchar('\n');
}
