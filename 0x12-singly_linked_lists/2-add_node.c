#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a linked list
 * @head: double pointer to the list
 * @str: new string to add in node
 * Return: the address of new element or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int x = 0;

	while (str[x])
		x++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = x;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
