#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node
 * Return: pointer to first node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = next;
	}

	*head = i;

	return (*head);
}
