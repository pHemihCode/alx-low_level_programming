#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - Function that adds new node at the beginning of a list
 *@head: pointer pointing to a pointer
 *@n: new node
 *Return: The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *pointer;
if (head == NULL)
return (NULL);
pointer = malloc(sizeof(listint_t));
if (pointer == NULL)
return (NULL);
pointer -> n = n;
pointer -> next = *head;
*head = pointer;
return (pointer);
}
