#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed to function
 *
 * Return: Always 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*declaring pointer to argument list*/
	va_list ap;

	unsigned int i;
	char *a;

	/*initializing argument to the list pointer*/
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char*);
		if (a)
			printf("%s", a);
		if (a == NULL)
			printf("nil)");

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}


	}
	printf("\n");

	va_end(ap);
}
