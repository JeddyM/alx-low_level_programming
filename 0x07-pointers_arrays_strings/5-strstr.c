#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: source string
 * @needle: string to locate
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{

	int i;

while (*haystack != '\0')
{
i = 0;
while (*haystack == *needle && *needle != '\0')
i++, haystack++, needle++;
if (*needle == '\0')
return (haystack - i);
haystack -= (i - 1), needle -= i;
}
return ('\0');
}
