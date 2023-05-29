#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *main - print last digit
 *Return: 0
 *
 */
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (n > 5)
{
printf("%d is greater then 5\n", lastdigit);
}
else if (n == 0)
{
printf("%d is zero\n", lastdigit);
}
else
{
printf("%d is less then 6\n", lastdigit);
}
return (0);
}
