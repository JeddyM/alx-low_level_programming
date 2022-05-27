#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head: pointer to  pointer to list to free
 *
 *Return: the head node’s data (n) if list empty return 0.
 */
int pop_listint(listint_t **head)
{

	listint_t *current_node;
	int num;


	if (head == NULL)
		return (0);


	current_node = *head;
	if (current_node == NULL)
		return (0);

	num = current_node->n;
	*head = current_node->next;
	free(current_node);
	return (num);
}
