#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: double pointer
 *@idx: node index
 *@n: new node
 *Return: NULL or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *tmp, *newnode;
if (head == NULL)
return (NULL);
if (idx != 0)
{
tmp = *head;
for (j = 0; j < idx - 1 && tmp != NULL; j++)
{
tmp = tmp->next;
}
if (tmp == NULL)
return (NULL);
}
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode -> n = n;
if (idx == 0)
{
newnode -> next = *head;
*head = newnode;
return (newnode);
}
newnode -> next = tmp->next;
tmp -> next = newnode;
return (newnode);
}
