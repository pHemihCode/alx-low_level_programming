#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - The function that allocates memory
 *@b: The number of intergers 
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
  int *ptr;
  ptr = (int *)malloc(b * sizeof(int));
  if (!ptr)
    {
      printf("98\n");
    }
  if (ptr == NULL)
    return (NULL);
  free(ptr);
  return (ptr);
}
