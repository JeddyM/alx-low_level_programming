#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to address of head of list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *forward;
	listint_t *backward;

	/*Address of head and address of first node*/
	if (head == NULL || *head == NULL)
		return (NULL);
	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}
	(*head)->next = backward;
	return (*head);
}
