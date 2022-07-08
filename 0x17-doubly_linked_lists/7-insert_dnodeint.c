#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: head of dlistint_t list
 * @n: data integer
 * @idx: index to insert new node.index starts at 0
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	while (*h)
	{
		new_node = malloc(sizeof(dlistint_t));
		current_node = *h;
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = NULL;
			return (new_node);
		}
		while (current_node->next != NULL && (idx - 1) > 0)
		{
			current_node = current_node->next;
			idx--;
		}
		if (current_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
