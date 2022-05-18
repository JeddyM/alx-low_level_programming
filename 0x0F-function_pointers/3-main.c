#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - selects a function and returns result
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*p)(int, int)

	if (argc != 4)
		printf("Error\n");
		exit(98);
	if (argv[2][1] != '\0')
		printf("Error\n");
		exit(99);


	p = get_op_func(argv[2]);

	if (p != NULL)
	{

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		result = (*p)(num1, num2);
		printf("%d\n", result);

	}
	else
		printf("Error\n");
		exit(99);
	return (0);

}
