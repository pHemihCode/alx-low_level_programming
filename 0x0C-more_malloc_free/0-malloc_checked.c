#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - The function that allocates memory
 *@b: The number of intergers
 *Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
