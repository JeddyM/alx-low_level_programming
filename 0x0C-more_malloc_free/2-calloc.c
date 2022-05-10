#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: bytes for each element
 * Return: pointer to the located memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* void means not associated with any data type*/
	void *calc;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calc = malloc(size * nmemb);

	if (calc == NULL)
		return (NULL);

	/*when element is character*/
	p = calc;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (calloc);
}
