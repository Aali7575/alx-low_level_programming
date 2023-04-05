#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: first node in the list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL always.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp);
}
