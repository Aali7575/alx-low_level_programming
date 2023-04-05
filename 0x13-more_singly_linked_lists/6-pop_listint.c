#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: head of linked list
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	i = current->n;
	*head = current->next;
	free(current);
	return (i);
}
