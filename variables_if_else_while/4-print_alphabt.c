#include <stdio.h>
/**
* main - printing alphabet in lowercase
* Return: always 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
putchar(c);
c++;
}

putchar('\n');

return (0);
}
