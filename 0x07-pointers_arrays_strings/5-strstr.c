#include "main.h"
/**
 *_strstr - finds the first occurence of the subdtring
 *@haystack: contains a string
 *@needle: contains the substring
 *Return: A pointer to the beginning of the loctaed substring
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (0);
}
