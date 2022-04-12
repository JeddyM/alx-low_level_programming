#include "main.h"

/**
 * _isalpha -checks if c is alphabetic character
 * @c: the value to be checked
 * Return: 1 if alphabetic character else 0
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
