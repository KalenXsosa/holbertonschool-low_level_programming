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
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("%d and is greater than 5\n", lastdigit);
}
else if (n == 0)
{
printf("%d and is zero\n", lastdigit);
}
else
{
printf("%d and is less then 6 and not 0\n", lastdigit);
}
return (0);
}
