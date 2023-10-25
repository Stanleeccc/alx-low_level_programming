#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a link list
 * @head: points to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newd;

	newd = malloc(sizeof(listint_t));

	if (!newd)
	return (NULL);
	newd->n = n;
	newd->next = *head;
	*head = newd;
	return (newd);
}
