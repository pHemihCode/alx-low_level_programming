#include "lists.h"
/**
 *sum_listint - function that return the sum of all the data of a linked list
 *@head: pointer 
 *Return: sum of the list
 */
int sum_listint(listint_t *head)
{
int add = 0;
while (head != NULL)
{
add += head -> n;
head = head -> next;
}
return (add);
}
