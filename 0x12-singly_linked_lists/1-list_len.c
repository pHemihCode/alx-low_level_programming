#include "lists.h"

/**
 * list_len - functon tht returns the number of elements.
 * @h: pointer.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int counter = 0;

temp = h;
while (temp)
{
counter++;
temp = temp->link;
}
return (counter);
}
