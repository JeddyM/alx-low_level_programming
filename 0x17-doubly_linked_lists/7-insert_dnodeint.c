#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * 
 * @head: head of dlistint_t list
 * @n: pointer
 * @idx: index to insert new node.index starts at 0
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
