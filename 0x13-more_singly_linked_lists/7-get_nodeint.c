#include "lists.h"
#include <stdlib.h>
/**
 *get_nodeint_at_index - function that returns the nth node of a linked list
 *@head: pointer
 *@index: index of the node starting at 0
 *Return: NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
if (head == NULL)
return (NULL);
for (a = 0; a < index; a++)
{
head = head -> next;
if (head == NULL)
return (NULL);
}
return (head);
}
