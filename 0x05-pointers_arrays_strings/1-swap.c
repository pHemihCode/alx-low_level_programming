#include "main.h"
#include <stdio.h>
/**
 *swap_int - Function that swaps the numbers
 *@a: First number
 *@b: Second number
 *@c: variable 
 *@c: the variable
 *Return: Alwways o
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
