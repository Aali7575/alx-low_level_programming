#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: address to the list to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
    listint_t *current = *head;

    while (current != NULL)
    {
        listint_t *next_node = current->next;
        free(current);
        current = next_node;
    }

    *head = NULL;
}
