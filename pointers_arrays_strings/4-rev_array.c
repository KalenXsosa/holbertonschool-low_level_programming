#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int indica;

	for (indica = n - 1; indica >=  2; indica--)
	{
	tmp = a[n - 1 - indica];
	a[n - 1 - indica] = a[indica];
	a[indica] = tmp;
}
}
