#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @hd: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **hd, const char *str)
{
	list_t *new;
	list_t *tp = *hd;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*hd == NULL)
	{
		*hd = new;
		return (new);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = new;

	return (new);
}
