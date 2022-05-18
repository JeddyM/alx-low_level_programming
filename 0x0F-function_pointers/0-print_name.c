#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - function that prints name
 * @name: name as a parameter passed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{

	if (name && f)

 	 (*f)(name);


}

