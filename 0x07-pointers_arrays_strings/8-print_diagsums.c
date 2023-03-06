#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - A function that prints
 *@a: The pointer to an array
 *@size: The size of the array
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int Rowsum, Columnsum;
Rowsum = 0;
Columnsum = 0;
for (i = 0; i < size; i++)
{
Rowsum += a[(size * i) + i];
Columnsum += a[(size * (i + 1)) - (i + 1)];
}
printf("%d %d\n", Rowsum,Columnsum);
}
