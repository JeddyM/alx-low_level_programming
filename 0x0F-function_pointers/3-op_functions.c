#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - add two numbers
 * @a: num 1
 * @b: num 2
 *Return: sum of two numbers
 */
int op_add(int a, int b)
{

	return (a + b);

}

/**
 * op_sub - Gets differences of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - product of 2 numbers
 * @a: num 1
 * @b: num2
 *
 * Return: product
 */
int op_mul(int a, int b)
{

	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: num1
 * @b: num2
 *
 * Return: division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);
	return (a / b);
}
/**
 * op_mod - returns remainder of the division of 2 numbers
 * @a: num1
 * @b:num2
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{


	if (b == 0)
		printf("Error\n");
		exit(100);
	return (a % b);
}
