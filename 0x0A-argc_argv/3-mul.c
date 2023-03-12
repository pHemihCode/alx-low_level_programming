#include <stdio.h>
#include <stdlib.h>
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
printf("Error\n");
return (1);
}
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int mult = a * b;
printf("%d", mult);
printf("\n");
return (0);
}
