#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.i
 * @head: pointer to head of list-t list(address og head)
 * @n: integer to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node;
	listint_t *current_node;/* node at end currently*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
		/*nothing on list no current_node*/
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node->next = current_node;

	current_node->next = new_node;

	return (new_node);


}
