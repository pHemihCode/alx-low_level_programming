#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Reverse an array of integer
 *@a: an array of integers
 *@n: the number of lements in the array
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
i = 0;
while (i < n)
{
n--;
j = a[i];
a[i] = a[n];
a[n] = j;
i++;
}
}
