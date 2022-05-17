#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
 * print_all - function that prints anything
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed to function
 *
 * Return: Always 0 success
 */
void print_all(const char * const format, ...)
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
