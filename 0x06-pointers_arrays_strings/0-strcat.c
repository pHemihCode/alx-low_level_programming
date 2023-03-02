#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - The function that concatenates dest amd src
 *@dest: The first pointer as parameter
 *@src: The second pointer as parameter
 */
char *_strcat(char *dest, char *src)
{
int Length1 = strlen(dest);
int Length2 = strlen(src);
for (int i = 0; i <= Length2; i++)
{
dest[Length2 + 1] = src[i];
}
}
