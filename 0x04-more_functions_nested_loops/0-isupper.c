#include "main.h"
#include <stdio.h>

/**
*_isupper - Initiating function
*@c: variable of upper or lower case 
*
*Return: Always 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
