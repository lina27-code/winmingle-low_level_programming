#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t list
* @head: pointer to head of list
* @index: index of node to return (starting at 0)
*
* Return: pointer to node, or NULL if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);
        i++;
        head = head->next;
    }
    return (NULL);
}
