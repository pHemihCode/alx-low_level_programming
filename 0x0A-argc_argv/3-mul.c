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
  unsigned int res = 0;
  while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
    {
      if (s[i] == '-')
	sign *= -1;
      i++;
    }
  while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
    {
      res = (res * 10) + (s[i] - '0');
      i++;
    }
  res *= sign;
  return (res);
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
if (argc != 3)
{
printf("Error");
printf("\n");
return (1);
}
int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return (0);
}
