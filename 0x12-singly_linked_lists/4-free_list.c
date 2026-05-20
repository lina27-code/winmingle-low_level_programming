#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to the head of the list
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *current;
list_t *next_node;

current = head;
while (current != NULL)
{
next_node = current->next;
free(current->str);   /* free the duplicated string */
free(current);        /* free the node itself */
current = next_node;
}
}
