#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the head nodes data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *add;
	int number;

	if (!head || !*head)
	return (0);
	number = (*head)->n;
	add = (*head)->next;
	free(*head);
	*head = add;
	return (number);
}
