#include "main.h"
#include <stdlib.h>
/**
 *argstostr - a function that concatenates
 *@ac: count of arguments passed to function
 *@av:array of arguments
 *
 *Return: pointer or NULL
 */
int len(char *str);
char *argstostr(int ac, char **av)
{
char *new = NULL;
int k = 0, i = ac, j, sum = 0, temp = 0;

if (ac == 0 || av == NULL)
return (NULL);

while (ac--)
sum += (len(av[ac]) + 1);
new = (char *) malloc(sum + 1);

if (new != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
new[j + temp] = av[k][j];
new[temp + j] = '\n';
temp += (j + 1);
k++;
}
new[temp] = '\0';
}
else
{
return (NULL);
}
return (new);
}

/**
 *len - returns length of str
 *@str: string counted
 *Return: returns the length
 */
int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
