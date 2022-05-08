#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char **argv)

{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}

