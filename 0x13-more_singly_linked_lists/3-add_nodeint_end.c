#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newd;
	listint_t *add = *head;

	newd = malloc(sizeof(listint_t));
	if (!newd)
	return (NULL);
	newd->n = n;
	newd->next = NULL;
	if (*head == NULL)
	{
		*head = newd;
		return (newd);
	}
	while (add->next)
	add = add->next;
	add->next = newd;
	return (newd);
}
