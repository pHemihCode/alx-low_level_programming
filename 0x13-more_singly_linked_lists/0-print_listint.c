#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints elements
 *@h: pointer
 *Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t thenodes = 0;
while (h)
{
thenodes++;
printf("%d\n", h -> n);
h = h->link;
}
return (thenodes);
}
