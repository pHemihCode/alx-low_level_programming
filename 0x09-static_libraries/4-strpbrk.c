#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - function that locates the first occurence in the string
 *@s: The string
 *@accept: The bytes
 *Return: Pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}
return (NULL);
}
