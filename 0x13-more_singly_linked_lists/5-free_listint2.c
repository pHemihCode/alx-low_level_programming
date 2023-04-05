#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - Function that frees a list
 *@head: pointer pointing to another pointer
 *Return : 0
 */
void free_listint2(listint_t **head)
{
listint_t *next;
if (head == NULL)
return;

while (*head != NULL)
{
next = (*head) -> next;
free(*head);
*head = next;
}
}
