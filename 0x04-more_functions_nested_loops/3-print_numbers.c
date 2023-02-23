#include "main.h"
#include <stdio.h>

/**
*print_numbers - It prints the function
*
*Return: Always 0
*/
void print_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
