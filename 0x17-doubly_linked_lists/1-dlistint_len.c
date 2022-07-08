#include "lists.h"

/**
 * dlistint_len -  Returns the number of elements in a linked dlistint_t list.
 * @h: head of dlistint_t list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{

	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
