#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to head of list-t list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *del_node;
	listint_t *current_node;
	unsigned int i;

	if (head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{

		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;

	}

	del_node = current_node->next;
	current_node->next = del_node->next;
	free(del_node);
	return (1);
}
