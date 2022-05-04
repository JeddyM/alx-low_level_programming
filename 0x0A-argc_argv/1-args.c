#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{

	for (argc > 0)
		printf("%d\n", argc);

	return (0);
}

