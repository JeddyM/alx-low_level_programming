#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: 1 If one of the number contains symbols that are not digits
 * 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argc; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
			printf("Error\n");
			return (1);
			}

		}
		sum = sum + atoi(argv[i]);
	}

	if (argc <= 1)
	{
		printf("0\n");

	}

	else
	{
	printf("%d", sum);
	}

	return (0);
}

