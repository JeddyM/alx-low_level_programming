#include "main.h"
/**
 * print_sign - determine whether number is positive or negative
 * @n: the number to check
 * Return: 1 if positive, -1 if negative else 0
 */

int print_sign(int n)

{
	if (n > 0)
	{

		_putchar ('+');

		return (1);

	}

	else if (n == 0)

	{

		_putchar ('0');

		return (0);

	}

	else
	{

		_putchar ('-');

		return (-1);
	}
}
