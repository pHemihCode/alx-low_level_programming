#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - deletes the head node of a linked list
 *@head: double pointer
 *Return: Head node's pointer or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp = *head;
if (*head == NULL)
return (0);
else
{
n = (*head) -> n;
*head = (*head) -> next;
free(tmp);
return (n);
}
}
