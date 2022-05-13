#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to structure
 */


dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *p;

	if (name == NULL || owner  == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t))
	if (p != NULL)

	{

		(*p).name = _strdup(name);
		if (p->name == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}

		p->age = age;
		p->owner = _strdup(owner);
		if (p->owner == NULL)
		{
			free(p->name);
			free(p->owner);
			free(p);
			return (NULL);
		}
		return (p);

	}
	return (NULL);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given a parameter
 * @str: string to copy
 *
 * Return: pointer to new memory allocated
 */
char *_strdup(char *str)
{
	int j, i;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (*(str + j))
		j++;

	str_copy = malloc(sizeof(char) * j + 1);
	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		*(str_copy + i) = *(str + i);

	}
	return (str_copy);
}


















}

