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
unsigned int len1, len2, num = n, i, j;
if (s1 == NULL || s2 == NULL)
return ("");
len1 = strlen(s1) + num + 1;
len2 = strlen(s2);
if (num >= len2)
{
num = len2;
}
ptr = malloc(sizeof(*ptr) + len1);
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; j < num; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
