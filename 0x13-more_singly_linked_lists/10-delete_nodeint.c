#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t list
* @head: double pointer to head of list
* @index: index of node to delete (starting at 0)
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current;
    listint_t *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    /* Delete head node */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

  /* Find node before the one to delete */
    current = *head;
    for (i = 0; i < index - 1; i++)
    {
        if (current == NULL || current->next == NULL)
            return (-1);
        current = current->next;
    }

    if (current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}
