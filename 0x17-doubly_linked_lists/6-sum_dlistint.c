#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of dlistint_t linked list.
 * @head: head of dlistint_t list
 *
 * Return: sum of all data(n)
 */

int sum_dlistint(dlistint_t *head)
{

	int i;
	int sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
