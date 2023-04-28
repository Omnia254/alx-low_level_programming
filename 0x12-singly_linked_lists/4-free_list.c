#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *hd)
{
	list_t *tp;

	while (hd)
	{
		tp = hd->next;
		free(hd->str);
		free(hd);
		hd = tp;
	}
}
