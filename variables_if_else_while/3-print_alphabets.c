#include <stdio.h>
/**
* main - printing alphabet in lowercase and uppercasei
*
* Return: always 0
*/
int main(void)
{
char x;
char y;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (y = 'A'; y <= 'Z'; y++)
putchar(y);
putchar('\n');
return (0);
}
