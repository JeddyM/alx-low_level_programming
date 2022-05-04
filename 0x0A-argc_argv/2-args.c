#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints all arguments it receives
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	int i,

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);

		}
	}
	return (0);
}

