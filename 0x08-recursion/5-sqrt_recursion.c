#include "main.h"
/**
 * result- evaluates from 1 to n
 * @a: equal to n
 * @i: iterates from 1 to n
 * Return: square root else -1 if none
 */

int result(int a, int i)
{
	if (i * i == a)
		return (i);
	else if (i * i < a)
		return (result(a, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root else -1 if none
 */
int _sqrt_recursion(int n)
{

return (result(n, 1));
}
