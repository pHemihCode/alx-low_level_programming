#include "lists.h"

/**
 * list_len - functon tht returns the number of elements.
 * @h: pointer.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int count = 0;

tmp = h;
while (tmp)
{
count++;
tmp = tmp->link;
}
return (count);
}
