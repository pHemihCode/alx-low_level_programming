#include <stdio.h>
#include "dog.h"
/**
 *print_dog - the function that prints member of the struct
 *@d: poiner
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d -> name == NULL)
{
d -> name = "(nil)";
}
if (d -> owner == NULL)
d -> owner = "(nil)";
if (d == NULL)
return;
printf("%s\n %s\n",d -> name, d -> owner);
}
