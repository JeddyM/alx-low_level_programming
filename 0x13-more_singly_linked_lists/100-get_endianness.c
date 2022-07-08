#include "lists.h"


/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;

	char *c = (char *)&n;

	if (*c == 1)
		return (1);
	return (0);
}