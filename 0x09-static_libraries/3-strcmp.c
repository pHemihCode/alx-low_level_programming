#include "main.h"
#include <string.h>
/**
 *_strcmp - Compares strings
 *@s1: destination string
 *@s2: Source string
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int result = 0;
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
if (s1 != s2)
result = *s1 - *s2;
return (result);
}
