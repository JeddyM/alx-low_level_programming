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
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;


	current_node = *head;



	if (idx == 0)
	{
		new_node->next = current_node;
		(*head) = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{

		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;

	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);

}
