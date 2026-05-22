#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to head of list
* @idx: index where new node should be added (starting at 0)
* @n: integer to store in new node
*
* Return: address of new node, or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *current;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    /* Insert at beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Find node before insertion point */
    current = *head;
    for (i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(new_node);
            return (NULL);
        }
        current = current->next;
    }

    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
