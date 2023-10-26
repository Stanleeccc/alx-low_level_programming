#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node that should be deleted
 * Return: 1 if Success, or -1 if Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *add = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(add);
		return (1);
	}

	while (a < index - 1)
	{
		if (!add || !(add->next))
		return (-1);
		add = add->next;
		a++;
	}

	present = add->next;
	add->next = present->next;
	free(present);

	return (1);
}
