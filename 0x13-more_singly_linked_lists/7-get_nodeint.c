#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list of nth node
 * @index: index of the node, starting at 0
 *
 * Return: returns the nth node of a listint_t linked list
 * else NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *current_node;


	if (head == NULL)
		return (0);


	current_node = head;
	if (current_node == NULL)
		return (0);

	while (index != 0)
	{
		current_node = current_node->next;
		index--;
		/** if node does not exist*/
		if (current_node == NULL)
			return (0);

	}

	return (current_node);
}
