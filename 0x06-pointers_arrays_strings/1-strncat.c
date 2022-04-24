#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * @n: number of bytes from src
 * Return: :wq
 * a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0' && n > j, i++, j++)
		dest[i] = src[j];

	if (n > 0)
	{
	dest[i] = '\0';
	}
	return (dest);
}
