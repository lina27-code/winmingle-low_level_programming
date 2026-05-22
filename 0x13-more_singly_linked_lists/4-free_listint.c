#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to head of list
*
* Return: void
*/
void free_listint(listint_t *head)
{
    listint_t *current;
    listint_t *next_node;

    current = head;
    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}
