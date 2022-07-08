#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of
 * a dlistint_t linked list.
 * @head: head of dlistint_t list
 * @index: index to delete a node.index starts at 0
 * Return: 1 on success and -1 for fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
