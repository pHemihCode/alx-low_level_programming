#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - The function that duplicates
 *@str: Pointer to a array of string
 *Return: Pointer or NULL
 */
char *_strdup(char *str)
{
int n;
char *ptr;
if (str == NULL)
{
return (NULL);
}
n = strlen(str);
ptr = malloc(sizeof(char) * (n + 1));
if (ptr == NULL)
return (NULL);
strcpy(ptr, str);
return (ptr);
}
