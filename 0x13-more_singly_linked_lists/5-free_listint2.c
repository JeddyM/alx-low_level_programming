#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and
 * sets the head to NULL.
 * @head: pointer to  pointer to list to free
 *
 *
 */
void free_listint2(listint_t **head)
{

	listint_t *current_node;


	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;

}
