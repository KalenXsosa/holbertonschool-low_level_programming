#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - printing alphabet in lowercase
* followed by a new line
* Return: always 0
*/

int main(void)
{
int k;

for (k = 0; k < 10; k++)
{
putchar(k + '0');
if (k < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
