#include "main.h"
#include <stdlib.h>
/**
 *array_range - Function that allocates space to an array
 *@min: Minimum integer
 *@max: Max integer
 *Return: A pointer
 */
int *array_range(int min, int max)
{
int *ptr, i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
