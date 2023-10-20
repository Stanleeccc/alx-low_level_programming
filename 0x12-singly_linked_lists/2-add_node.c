#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: the first node pointer to the list_t list
 * @str: represents the new string to add in the node
 * Return: address of new entity, or NULL when it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;

	return (*head);
}

