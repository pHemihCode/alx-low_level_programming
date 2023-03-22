#include "main.h"
#include <stdio.h>
/**
 *print_name - function that calls another function
 *@f: pointer
 *@name: the string
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
