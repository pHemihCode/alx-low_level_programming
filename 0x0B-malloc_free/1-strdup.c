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
return NULL;
}
n = strlen(str);
ptr = (char *)malloc(n + 1);
strcpy(ptr, str);
return (ptr);
}
