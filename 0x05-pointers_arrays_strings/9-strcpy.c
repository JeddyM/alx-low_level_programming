#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: char pointer
 * @src: char pointer
 * Return: value of the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
