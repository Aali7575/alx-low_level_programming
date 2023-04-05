#include "lists.h"

/**
 * free_listint - frees a  list
 * @head: head of linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
    listint_t *i = head;

    while (i != NULL)
    {
        listint_t *next_node = i->next;
        i = next_node;
	free(i);
    }
}
