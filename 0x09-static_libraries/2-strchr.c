#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to a string
 * @c: character to locate
 * Return: string after occurance of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
