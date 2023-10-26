#include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t pnt = 0;
	int diff;
	listint_t *add;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			add = (*h)->next;
			free(*h);
			*h = add;
			pnt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			pnt++;
			break;
		}
	}

	*h = NULL;

	return (pnt);
}
