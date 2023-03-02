#include "main.h"
#include <string.h>
/**
 *_strncat - Function that concatenates
 *@src: Source string
 *@dest: Destination string
 *@n: Number
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = strlen(dest);
int j = 0;
while (j < n && *src)
{
dest[i + j] = *src;
src++;
j++;
}
dest[i + j] = '\0';
return (dest);
}
