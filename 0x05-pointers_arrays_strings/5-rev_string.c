#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - The function
 *@a: First variable
 *@b: Second variable
 *@c: Third variable
 *Return: 0
 */
void rev_string(char *s)
{
int a,b,c;
b = strlen(s);
for (a = 0; a < b/2; a++)
{
c = s[a];
s[a] = s[b - a - 1];
s[b - a - 1] = c;
}
}
      
  
