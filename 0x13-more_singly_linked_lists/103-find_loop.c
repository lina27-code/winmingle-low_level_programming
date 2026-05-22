#include "lists.h"

/**
* find_listint_loop - finds the start of a loop in a listint_t list
* @head: pointer to head of list
*
* Return: address of node where loop starts, or NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

/* Detect loop using Floyd's cycle-finding algorithm */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
/* Find start of loop */
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (slow);
        }
    }
    return (NULL);
}
