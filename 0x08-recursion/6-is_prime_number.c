#include "main.h"
/**
 * is_prime_number - checks if prime number
 * @n: number
 * Return: 1 if prime number,otherwise return 0
 */
int is_prime_number(int n)
{

	if (n < 2)
		return (0);
	return (primefind(n, 2));
}


/**
 * primefind - function to find prime number
 * @a: same as number to evaluate
 * @i: number to iterate from 1 to n
 * Return: 1 success
 */
int primefind(int a, int i)
{
	if (a == i)
		return (1);
	else if (a % i == 0)
		return (0);
	return (primefind(a, i + 1));
}
