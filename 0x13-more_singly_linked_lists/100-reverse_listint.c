#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: double pointer
 *Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre= NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head) -> next;
(*head) -> next = pre;
pre = *head;
*head = next;
}

*head = pre;
return (*head);
}
