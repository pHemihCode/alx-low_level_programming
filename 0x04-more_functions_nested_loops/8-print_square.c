#include "main.h"
#include <stdio.h>
/**
*print_square - Print squares
*@size: The number of lines
*Return: Always 0
*/
void print_square(int size)
{
int a;
int b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
