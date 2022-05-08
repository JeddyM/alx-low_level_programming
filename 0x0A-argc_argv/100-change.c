#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minmum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer of array of pointer containing argument strings
 * Return: Always 0 success
 */

int main(int argc, char *argv[])

{

	int coins = 0, cents;

	if (argc != 2)
	{
	printf("Error\n");
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
		cents = cents - 25;
		continue;
		}
		if ((cents - 10) >= 0)
		{
		cents -= 10;
		continue;
		}

		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}

		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}

