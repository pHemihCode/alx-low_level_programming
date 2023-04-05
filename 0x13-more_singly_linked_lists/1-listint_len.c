#include "lists.h"
/**
 *listint_len - function that returns the numner of element in a linked list
 *@h: pointer to head
 *Return: the length of the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
h = h -> next;
num++;
}
return (num);
}
