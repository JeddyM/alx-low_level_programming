#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t list pointer.
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	/*count of elements*/

	while (h != NULL)

	{
		count++;
		h = h->next;
	}
	return (count);

}
