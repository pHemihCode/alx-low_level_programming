#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - function that adds
 *@a: an integer
 *@b: an integer
 *Return: result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - function the subtracts
 *@a: an integer
 *@b: an integer
 *Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - the function the multiplies
 *@a: an integer
 *@b: an integer
 *Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - the function that divides
 *@a: an integer
 *@b: an integer
 *Return: result
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 *op_mod - The function that returns remainder
 *@a: an integer
 *@b: an integer
 *Return: remainder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
