#include <stdio.h>
/**
 * main -prints out in lowercase and then in uppercase
 *
 * Return:Always 0(success)
 */
int main(void)
{
	char ch_lower;
	char ch_upper;

	for (ch_lower = 'a' ; ch_lower <= 'z' ; ch_lower++)

  	{
	putchar(ch_lower);
	}

	for (ch_upper = 'A' ; ch_upper <= 'Z' ; ch_upper++)

	{
	putchar(ch_upper);
	}

	putchar('\n');
	return (0);
}

