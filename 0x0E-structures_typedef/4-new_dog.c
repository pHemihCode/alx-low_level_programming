#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - The function
 *@name: member
 *@age: member
 *@owner: member
 *Return: Null
 */
/**
 *_strlen - returns length of string
 *@str: string to be counted
 *Return: returns length of string
 */
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}

/**
 *_strcopy - copy string pointed by src into dest variable
 *@dest:buffer storing string copy
 *@src: buffer storing string to copy
 *Return:returns copied string
 */
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
doggo -> name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo -> name == NULL)
{
free(doggo);
return (NULL);
}

doggo -> owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo -> owner == NULL)
{
free(doggo -> name);
free(doggo);
return (NULL);
}
doggo -> name = _strcopy(doggo -> name, name);
doggo -> age = age;
doggo -> owner = _strcopy(doggo -> owner, owner);

return (doggo);
}
