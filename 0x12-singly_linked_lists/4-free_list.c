#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: the first list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *tiana;

	while (head)
	{
		tiana = head->next;
		free(head->str);
		free(head);
		head = tiana;
	}
}
