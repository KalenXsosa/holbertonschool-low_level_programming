#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * @print_numbers - print number
 *
 * Return: Always 0.
 */
void print_numbers(void)
{

char k;

for (k = 0; k <= 9; k++)
{
_putchar('0' + k);
}
_putchar('\n');

}

