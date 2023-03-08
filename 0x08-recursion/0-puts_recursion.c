#include "main.h"
/**
 *_puts_recursion - Functions that prints s string
 *@s: The string
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar(*s);
}
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
