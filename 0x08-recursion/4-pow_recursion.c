#include "main.h"
/**
 *_pow_recursion - Function that calculates
 *@x: Integer
 *@y: Integer
 *Return: An integer
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (-1);
}
else if (y % 2 == 0)
{
int result = _pow_recursion(x, y/2);
return result * result;
}
else
{
int result = _pow_recursion(x, (y - 1) / 2);
return (x * result * result);
}
}
