#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function thst prints struct dog
 * @d:variable
 *
 * return: 0 success
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");

	}
}
