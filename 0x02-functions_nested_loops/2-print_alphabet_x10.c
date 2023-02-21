#include "main.h"
/**
*print_alphabet_x10 - Code checker
*
*Return: Always 0
*/
void print_alphabet_x10(void)
{
int mult = 0;
while (mult < 10)
{
      
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
mult++;
}
}
