#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * rot13 - Encodes a string using rot13.
 * @s: An input string 
 * Return: An encode string
 */
char *rot13(char *s)
{
if (s == NULL)
{
return NULL;
}

char* result = malloc(strlen(s));

if (result != NULL)
{
strcpy(result, s);
char* current_char = result;

while (*current_char != '\0'){
if ((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90)){
if (*current_char > 109 || (*current_char > 77 && *current_char < 91)){
*current_char -= 13;
}
else
{
*current_char += 13;
}
}
current_char++;
}
}
return result;
}
