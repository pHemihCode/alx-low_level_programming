#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - The function that allocates memory to an array
 *@width: width of array
 *@height: height of array
 *Return: Return a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int i = 0, j;
if (width == 0 || height == 0)
return (NULL);
ptr = (int **) malloc(sizeof(int *) * height);
if (ptr != NULL)
{
for (; i < height; i++)
{
ptr[i] = (int *) malloc(sizeof(int) * width);
if (ptr[i] != NULL)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}
else
{
while (i >= 0)
{
free(ptr[i]);
i--;
}
free(ptr);
return (NULL);
}
}
return (ptr);
}
else
{
return (NULL);
}
}
