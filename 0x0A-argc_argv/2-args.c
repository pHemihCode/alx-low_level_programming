#include <stdio.h>
/**
 *main - The entry point
 *@argc: The argument count
 *@argv: The argument array
 *Return: Always void
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("\n");
printf("%s\n", argv[i]);
}
return (0);
}
