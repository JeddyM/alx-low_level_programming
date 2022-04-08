#include <stdio.h>
/**
 * main - Entry point prints lowercase in reverse
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}

	putchar('\n');
	return (0);

}
