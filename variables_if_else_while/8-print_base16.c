#include <stdio.h>
/**
* main - printing alphabet in lowercase
* Return: always 0
*/

int main(void)

{
int m;
char power;

for (m = 'a'; m <= 'z'; m++)
putchar(m);

for (power = 'a'; power <= 'z'; power++)
putchar(power);
putchar('\n');

return (0);
}
