#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the function
 * @d: pointer to struct dog
 * @name: member
 * @age: member
 * @owner: member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d -> name = name;
d -> age = age;
d -> owner = owner;
}
