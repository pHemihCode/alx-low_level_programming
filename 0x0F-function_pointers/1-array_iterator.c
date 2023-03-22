#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - the function that calls function pointer
 *@array: the array
 *@size: the size of the array
 *@action: pointer to a function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
