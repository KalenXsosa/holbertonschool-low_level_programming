#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: equals zero
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int k;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (k = 0; k < n; k++)
{



	_putchar('\\');

	_putchar('\\');
	_putchar('\n');
}
}
}
