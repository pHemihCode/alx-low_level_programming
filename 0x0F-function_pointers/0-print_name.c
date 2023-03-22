#include "main.h"
#include <stdio.h>
/**
 *myname - the name of the function
 *print_name - function that calls another function
 *@tmp: temporary storage
 *Return: void
 */
void myname(char *);
void myname(char *name)
{
char *tmp;
tmp= name;
while (*tmp != '\0')
{
printf("%c", *tmp);
tmp++;
}
}

void print_name(char *name, void (*f)(char *))
{
f(name);
}
