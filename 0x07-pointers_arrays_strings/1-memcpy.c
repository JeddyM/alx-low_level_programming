#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @dest: pointer to memory area to print to
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

	dest[i] = src[i];
	i++;
	}
	return (dest);
}
