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
int len1, len2;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
len1 = strlen(s1);
len2 = strlen(s2);
ptr = malloc(sizeof(char) * (len1 +len2));
strcat(s1, s2);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
