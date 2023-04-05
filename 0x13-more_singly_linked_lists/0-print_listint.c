#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the number of elements in a linked lists
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
