#include <stdio.h>
/**
 * main - Entry point prints lowercase
 * base 16 numbers
 * Return: always 0 (success)
 */
int main(void)
{

	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
