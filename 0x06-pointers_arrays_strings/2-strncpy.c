#include "main.h"
/**
 *_strncpy - Function that copies
 *@dest: destination string
 *@src: source string
 *@n: number
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
