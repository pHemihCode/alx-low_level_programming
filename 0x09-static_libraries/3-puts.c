#include "main.h"
#include <stdio.h>
/**
 *_puts - printd a string
 *@str: the string
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}