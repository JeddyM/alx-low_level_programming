#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: takes in the integer
 * Return: always 0 (success)
 */
int _abs(int n)

{

	if (n < 0)

	{

		return (n * (-1));

	}

	else if (n == 0)

	{

		return (0);

	}

	else

	{

		return (n);

	}
}
