#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{

	for (argc > 0)
		printf("%s\n", argc[0]);

	return (0);
}

