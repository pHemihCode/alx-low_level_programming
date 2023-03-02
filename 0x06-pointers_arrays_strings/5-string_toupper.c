#include "main.h"
/**
 *string_toupper - To upper case 
 *@n: characters
 *
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
