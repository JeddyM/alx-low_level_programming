#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_t list pointer.
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{

	size_t count;

	if (h->str == NULL)
		printf("[0] (nil)");
	for (count = 0, h != NULL; count++)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);

}
