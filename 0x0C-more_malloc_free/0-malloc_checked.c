#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: memory to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == NULL)
		exit (98);

	return(a);
}
 
