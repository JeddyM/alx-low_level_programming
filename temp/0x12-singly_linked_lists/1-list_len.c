#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{

	size_t elements;

	while (h != NULL)
	{
		elements++
		h = h->next;
	}
	return (elements);
}
