#include "main.h"
/**
 *is_palindrome - The main function
 *@s: The string
 *Return: An integer
 */
int check(char *s, int i, int len);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (check(s,0,_strlen_recursion(s)));
}
