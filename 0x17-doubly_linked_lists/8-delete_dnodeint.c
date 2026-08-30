#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to head of list
 * @index: index of node to delete (starting at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* Delete head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Find node to delete */
    for (i = 0; i < index; i++)
    {
        if (current == NULL)
            return (-1);
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    /* Update links */
    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
