#include "lists.h"

/**
 * get_nodeint_at_index - node at a certain index
 * @head: first node in linked list
 * @index: index of node
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}

	return (y ? y : NULL);
}
