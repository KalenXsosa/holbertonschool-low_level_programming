#include <stdio.h>
/**
* main - printing alphabet in lowercase
* Return: always 0
*/
int main(void)
{
char high;
for (high = 'z'; high >= 'a'; high--)
putchar(high);
putchar('\n');

return (0);
}

