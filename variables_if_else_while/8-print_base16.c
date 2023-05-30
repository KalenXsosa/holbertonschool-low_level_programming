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
int m;
char power;

for (m = '0'; m <= '9'; m++)
putchar(m);

for (power = 'a'; power <= 'f'; power++)
putchar(power);
putchar('\n');

return (0);
}
