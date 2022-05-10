#include "main.h"
#include <stdlib.h>
/**
 * realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *real,


	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)

	if (new_size == 0 && ptr == old_size)
		return (NULL);


	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
