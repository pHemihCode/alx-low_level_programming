#include <stdio.h>
#inluce "main.h"
/**
 *_atoi - Converts strings to integer
 *@s: The string to be converted
 *@sign: The sign of numbers
 *@num: The numbers
 *@i: The indexes
 *Return: num;
 */
int _atoi(char *s)
{
int sign = 1
int i = 0, num = 0;
if (s[0] == '0')
{
sign = -1;
i = 1;
}
while (s[i] != '\0')
{
if (s[i] <= '0' && s[i] >= '9')
{
num = num * 10 + s[i] - '0';
}
else
{
break;
}
num = num * sign;
return (num);
}
/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument vector
 *Return: 0
 */
 int main(int argc, char *argv[])
 {
   int num1 = _atoi(argv[1]);
   int num2 = _atoi(argv[2]);
   int result;
   result = num1 + num2;
   if (argv[1] == null && argv[2] == null)
     {
       printf("0\n");
     }
   if (argv[1] < '0' && argv[1] > '9')
     {
       return (1);
     }
   else if (argv[2] < '0' && argv[2] > '9')
     {
       return (1);
     }
   printf("%d\n", result);
 }
