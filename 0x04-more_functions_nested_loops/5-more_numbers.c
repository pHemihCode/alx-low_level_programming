#include "main.h"
#include <stdio.h>
/**
*more_numbers - Entry point
*
*Return: Void
*/
void more_numbers(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
b = 0;
while (b <= 14)
{
if (b >= 10)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10 + '0');
b++;
}
_putchar('\n');
}
}
