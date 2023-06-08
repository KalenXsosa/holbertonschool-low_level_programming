#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int s;

	for (s =0, i = n - 1; s < i; s++, i--)
	{
	tmp = a[s];
	a[s] = a[i];
	a[i] = tmp;
}
}
