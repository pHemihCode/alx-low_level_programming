#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - Function that concatenates
 *@s1: the first string
 *@s2: the second string
 *@n: bytes
 *Return: a pointer to the new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len1, len2;
if (s1 == NULL || s2 == NULL)
return ("");
len1 = strlen(s1) + n + 1;
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
ptr = malloc(sizeof(char) + len1);
if (ptr == NULL)
return (NULL);
strncat(s1, s2, n);
return (ptr);
}
