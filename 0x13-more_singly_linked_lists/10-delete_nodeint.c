#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes the node index of a liked list
 *@head: double pointer
 *@index: index of node that should be deleted
 *Return: 1 if succeeded and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int j;
listint_t *new, *next;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
new = *head;
for (j = 0; j < index - 1; j++)
{
if (new -> next == NULL)
return (-1);
new = new -> next;
}
next = new -> next;
new -> next = next -> next;
free(next);
return (1);
}
