#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - function that frees a list_t list
 * @head: pointer to head of list-t list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)

		temp = head->next;
		free(head->next);
		free(head);

		head = temp;
}

