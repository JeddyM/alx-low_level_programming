#include <stdio.h>
/**
 * main - Entry point printing three digits in ascending order
 *
 * Return: always 0 (success)
 */


int main(void)
{

	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{

			for (c = 50; c < 58; c++)
			{

				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
