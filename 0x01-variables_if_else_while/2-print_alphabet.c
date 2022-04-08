#include <stdio.h>
/**
 * main - prints the alphabet letters in lowercase
 * and prints a new line
 * Return : always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar("\n");

	return (0);
}	
