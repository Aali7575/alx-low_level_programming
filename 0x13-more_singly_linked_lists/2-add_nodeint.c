#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds new node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
