#include "main.h"
/**
 *_memset - Fills memory with a constant bytes
 *@s: Memory area
 *@b:constant byte
 *@n: First byte
 *Return: A pointer to ht memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
