#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t list with loop detection
* @head: pointer to head of list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    const listint_t *loop_node = NULL;
    size_t count = 0;
    int has_loop = 0;

/* Detect loop using Floyd's cycle-finding algorithm */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            has_loop = 1;
            loop_node = slow;
            break;
        }
    }

    /* Print nodes until loop point */
    slow = head;
    while (slow != NULL)
    {
        if (has_loop && slow == loop_node && count > 0)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    return (count);
}
