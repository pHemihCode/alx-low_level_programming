#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **str_concat - Function that concats to strings
 *@s1: The first string
 *@s2: The second string
 *Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i = 0, j = 0, a;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
{
s1[i] = s2[j];
j++;
i++;
}
s1[i] = '\0';
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; s1[i]; i++)
ptr[a++] = s1[i];
for (i = 0; s2[i]; i++)
ptr[a++] = s2[i];
return (ptr);
}
