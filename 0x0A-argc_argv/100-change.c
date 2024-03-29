#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @argc: argument count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num, j, res;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
res = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
res++;
num -= coins[j];
}
}
printf("%d\n", res);
return (0);
}
