#include "main.h"
#include <stdio.h>
/**
*print_diagonal - Printing in diagonal
*@n: variable
*Return: Void
*/
void print_diagonal(int n)
{
int i;
int dash;
for (i = 0; i < n; i++)
{
for (dash = 0; dash < i; dash++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
