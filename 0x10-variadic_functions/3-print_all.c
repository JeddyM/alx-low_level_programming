#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0 success
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i = 0, n = 0;
	/*declaring pointer to argument list*/
	va_list args;

	/*initializing argument to the list pointer*/
	va_start(args, format);

	if (format)
		while (format[i])
		{
			switch (format[i])
			{

				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					break;
			}
			if (i != n - 1)
				printf(", ");
			i++;
		}
	printf("\n");
	va_end(args);
}
