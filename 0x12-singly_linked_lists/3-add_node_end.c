#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: the first node pointer to the list_t list
 * @str: represents the new string to add in the new node
 * Return: address of the new element, or NULL when it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first;
	list_t *tiana = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
		return (first);
	}

	while (tiana->next)
		tiana = tiana->next;

	tiana->next = first;

	return (first);
}
