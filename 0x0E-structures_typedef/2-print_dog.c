#include <stdio.h>
#include "dog.h"
/**
 *print_dog - the function that prints member of the struct
 *@d: poiner
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d -> name == NULL)
d -> name = "(nil)";
if (d -> owner == NULL)
d -> owner = "(nil)";
printf("%s\n %s\n", d -> name, d -> owner);
}
