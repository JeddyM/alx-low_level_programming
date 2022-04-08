#include <stdio.h>
/**
 * main - Entry point print possible
 * combination of single digit
 * Return: always 0 (success)
 */
int main(void)

{
	int num;

	for (num = 48; num < 58; num++)
	{

	putchar(num);

	if (num == 57)
	{
	break;
	}

	putchar(',');
	putchar(' ');


	}

	putchar('\n');
	return (0);

}
