#include "lists.h"

/**
 * sum_listint - calculate sum of all data
 * @head: first node in linked list
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *y = head;

	while (y)
	{
		x += y->n;
		y = y->next;
	}

	return (x);
}
