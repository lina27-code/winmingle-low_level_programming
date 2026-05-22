#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - frees a listint_t list with loop detection
* @h: double pointer to head of list
*
* Return: size of list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow = *h;
    listint_t *fast = *h;
    listint_t *temp;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (0);

/* Detect loop */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }

/* If there's a loop, break it by setting the last node's next to NULL */
    if (slow == fast && fast != NULL)
    {
        slow = *h;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
/* Find the node that points to the start of the loop */
        while (fast->next != slow)
            fast = fast->next;
        fast->next = NULL;
    }

/* Free the list normally */
    while (*h != NULL)
    {
        temp = (*h)->next;
        free(*h);
        *h = temp;
        count++;
    }

    *h = NULL;
    return (count);
}
