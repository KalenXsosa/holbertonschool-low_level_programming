#include <stdio.h>
/**
 * main - print statement
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of short int: %ld byte(s)\n", sizeof(short int));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long int: %ld byte(s)\n", sizeof(long int));
return (0);
}
