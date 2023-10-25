#include "lists.h"

/**
 * sum_listint - returns the sum of data n in a listint_t list
 * @head: first node in the linked list
 *
 * Return: node, if empty NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *add = head;

	while (add)
	{
		sum += add->n;
		add = add->next;
	}
	return (sum);
}
