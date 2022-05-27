#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 * @head: pointer to list-t list
 * Return: returns the sum of all the data (n) of a listint_t linked list
 * and 0 if list empty
 *
 */
int sum_listint(listint_t *head)
{

	listint_t *current_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	current_node = head;

	while (current_node)
	{

		sum += current_node->n;
		current_node = current_node->next;

	}
	return (sum);

}
