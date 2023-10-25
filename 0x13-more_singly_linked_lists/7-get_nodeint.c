#include "lists.h"

/**
 * get_nodeint_at_index - certain index in a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node starting at 0
 * Return: Node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *add = head;

	while (add && a < index)
	{
		add = add->next;
		a++;
	}
	return (add ? add : NULL);
}
