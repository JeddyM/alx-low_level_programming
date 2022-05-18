#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed to function
 *
 * Return: Always 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*declaring pointer to argument list*/
	va_list ap;

	unsigned int i;

	/*initializing argument to the list pointer*/
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		/* Getting the data  and indicating type using va_arg */
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}


	}
	printf("\n");

	va_end(ap);
}
