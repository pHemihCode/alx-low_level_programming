#include "main.h"
/**
 *_memcpy - Copy memory area
 *@dest: Destination string
 *@src: Source string
 *@n: bytes of the memory
 *Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
