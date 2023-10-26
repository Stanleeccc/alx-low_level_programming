#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node to a given position
* in a linked list
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data where to insert in the new node
 * Return: new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newd;
	listint_t *add = *head;

	newd = malloc(sizeof(listint_t));

	if (!newd || !head)
	return (NULL);
	newd->n = n;
	newd->next = NULL;

	if (idx == 0)
	{
		newd->next = *head;
		*head = newd;
		return (newd);
	}
	for (a = 0; add && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newd->next = add->next;
			add->next = newd;
			return (newd);
		}

		else
		add = add->next;
	}
	return (NULL);
}
