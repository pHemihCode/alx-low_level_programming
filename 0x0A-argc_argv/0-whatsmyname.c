#include <stdio.h>
/**
 *main - The entry point
 *@argc: The argument count
 *@argv: The argument vector
 *Return: void
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s",argv[i]);
}
return (0);
}