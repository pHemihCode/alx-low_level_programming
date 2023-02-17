#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int the_num;
char alpha;
for (the_num = '0' ; the_num <= '9' ; the_num++)
putchar(the_num);
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
