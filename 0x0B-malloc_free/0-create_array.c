#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **create_array - the function that creates array
 *@size: Size of the array
 *@c: the character
 *Return: Null or pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
{
return (NULL);
}
ptr = malloc(size * sizeof(c));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
