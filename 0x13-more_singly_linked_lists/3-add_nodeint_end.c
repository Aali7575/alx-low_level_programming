#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - func that adds a node at the end of a linked list
 * @head:address to the first element in the list
 * @n: data to insert in the new element
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}

