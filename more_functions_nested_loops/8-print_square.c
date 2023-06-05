#include "main.h"

/**
 * print_square - draw diagonal line
 * @size: shape of square
 * Return: Always 0.
 */
void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}

	_putchar('#');

	_putchar('\n');
}

