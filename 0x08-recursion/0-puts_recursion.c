#include "main.h"
/**
 *_puts_recursion - Functions that prints s string
 *@s: The string
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_puts_recursion(s + 1);
}
