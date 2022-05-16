#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory of structure dog
 * @d: pointer to the variable
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}