#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(arg[1]) * atoi(arg[2]);
		printf("%d\n", mul);
	}
	return (0);
}

