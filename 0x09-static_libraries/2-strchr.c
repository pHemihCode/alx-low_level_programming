#include "main.h"
#include <stdio.h>
/**
 *_strchr - Function that locates a string
 *@s: The string
 *@c: The character
 *Return: A pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
