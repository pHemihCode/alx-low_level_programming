#include "main.h"
/**
 *factorial - The function that contains the logic
 *@n: The number
 *Return: The factorial of n
 */
signed int factorial(signed int n)
{
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
