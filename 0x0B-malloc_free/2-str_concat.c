#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - Function that concats to strings
 *@s1: The first string
 *@s2: The second string
 *Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i, a = 0, j = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
j++;

ptr = malloc(sizeof(char) * j);

if (ptr == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
ptr[a] = s1[i];
for (i = 0; s2[i]; i++)
ptr[a++] = s2[i];

return (ptr);
}
