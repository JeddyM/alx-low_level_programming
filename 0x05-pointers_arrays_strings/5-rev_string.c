#include "main.h"
/**
 * rev_string - recerses a  string
 * @s: string pointer
 * Return void
 */
void rev_string(char *s)
{
int length, j, i;
char a, b;

for (length = 0; s[length] != '\0'; length++)
{
}
	j = length - 1;
	i = 0;

	while( j > i)
	{

	a = s[i];
	b = s[j];
	s[i] = b;
	s[j] = a;
	j--;
	i++;
	}
}
