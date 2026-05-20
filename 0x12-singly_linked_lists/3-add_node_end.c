#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to be duplicated and stored in the new node
*
* Return: address of the new element, or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last;
char *dup_str;

if (head == NULL || str == NULL)
return (NULL);

/* Duplicate the string */
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

/* Initialize the new node */
new_node->str = dup_str;
new_node->len = strlen(str);
new_node->next = NULL;

/* If list is empty, new node becomes head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Find the last node */
last = *head;
while (last->next != NULL)
last = last->next;

/* Append new node */
last->next = new_node;

return (new_node);
}
