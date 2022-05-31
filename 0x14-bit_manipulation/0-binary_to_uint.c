#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL and
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int sum = 0, temp = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);


	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		temp = (b[i] - '0') * _pow_recursion(2, (len - 1) - i);
		sum += temp;
	}
	return (sum);

}

/**
 * _strlen - returns length of a string
 * @s: string to find length
 * Return: length of a string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _pow_recursion -function that calculates x raised to y
 * @x: integer or base
 * @y: exponent
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
