#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: head of dlistint_t list
 *
 * Return: 0 on success
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
