#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element
 * Return: deleted data or 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (i);
}
