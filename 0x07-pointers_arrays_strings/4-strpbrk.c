#include "main.h"
/**
 *_strpbrk - function that locates the first occurence in the string
 *@s: The string
 *@accept: The bytes
 *Return: Pointer to the byte in s that matches one of the bytes in accept 
 */
char *_strpbrk(char *s, char *accept)
{
char *thestring = s;
while (*thestring != '\0')
{
char * thebytes = accept;
while (*thebytes != '\0')
{
if (*thestring == *thebytes)
{
return thestring;
}
}
}
}
	  
