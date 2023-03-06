#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - A function that prints
 *@a: The pointer to an array
 *@size: The size of the array
 *Return: Void
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int Rowsum, Columnsum;
for (i = 0; i < size; i++)
{
Rowsum += a[(size * i) + i];
Columnsum += a[(size * (i + 1)) - (i + 1)];
}
printf("%d %d", Rowsum,Columnsum);
}
