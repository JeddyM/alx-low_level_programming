#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to head of list-t list(address og head)
 * @n: integer to be added
 * @idx: index of list where the new node should be added. Index starts at 0
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (0);

	new_node->n = n;


	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}
	
	current_node = *head;

	while (idx != 1)
	{

		
		current_node = current_node->next;
		--idx;
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);

}
