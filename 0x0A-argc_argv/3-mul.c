#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int sign = 1, i = 0;
int res = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + (s[i] - '0');
}
else
{
return (0);
}
}
return sign * res;
}
/**
 *main - The entry point
 *@argc: Counter
 *@argv: Array
 *@a: Holds the first number as integer
 *@b: Holds the second number as integer
 *Return: Integer
 */
int main(int argc, char *argv[])
{
int a, b, result;
if (argc != 3)
{
printf("Error");
printf("\n");
return (1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
result = a * b;
printf("%d\n", result);
return (0);
}
