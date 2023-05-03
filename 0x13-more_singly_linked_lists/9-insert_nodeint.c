#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node
 * @head: pointer to first node
 * @idx: index for added new node
 * @n: data for new node
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *b;
	listint_t *c = *head;

	b = malloc(sizeof(listint_t));
	if (!b || !head)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}

	for (a = 0; c && a < idx; a++)
	{
		if (a == idx - 1)
		{
			b->next = c->next;
			c->next = b;
			return (b);
		}
		else
			b = b->next;
	}

	return (NULL);
}
