#include "main.h"
#include <stdlib.h>
/**
 *calloc - Allocates memory to an array
 *@nmemb: array length
 *@size: Bytes of the array
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
*((char *)(ptr) + i) = 0;
}
return (ptr);
}
