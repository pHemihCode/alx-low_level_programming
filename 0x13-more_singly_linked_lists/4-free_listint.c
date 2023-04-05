#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - Function that frees a list
 *@head: pointer
 *Return: NULL 
 */
void free_listint(listint_t *head)
{
listint_t *next;
 
while (head != NULL)
{
next = head -> next;
free(head);
head = next;
}

}
