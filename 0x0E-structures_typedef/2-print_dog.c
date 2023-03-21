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
printf("nil");
}
if (d -> owner == NULL)
printf("nil");
if (d == NULL)
return;
}
