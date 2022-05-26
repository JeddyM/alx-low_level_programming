C - More singly linked lists


All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options
 -Wall -Werror -Wextra -pedantic -std=gnu89

TASKS
Task 0
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
You are allowed to use print

Task 1
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);

Task 2
Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Task 3
Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Task 4
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

