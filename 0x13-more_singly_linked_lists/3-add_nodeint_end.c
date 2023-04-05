#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - Adds new node to the end of the linked list
 *@head: Pointer
 *@n: new node
 *Return: The address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *tmp;

if (head == NULL)
return (NULL);
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = node;
return (node);
}
