#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of your program
 * @ac:number of arguments passed
 * @av:array of pointer to the arguments
 * Return: pointer to a new string else NULL if acc == 0
 * NULL av == Null
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, size = ac, arg, byte;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	size++;
	}
	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < size; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	s[i++] = av[arg][byte];

	s[i++] = '\n';

	}
	s[size] = '\0';

	return (s);
}
