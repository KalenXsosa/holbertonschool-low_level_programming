#include "main.h"

/**
 * print_triangle - check the code
 * @size: tri
 * Return: Always 0.
 */
void print_triangle(int size)
{

int o, u, p;

	if (size <= 0)
	{
	_putchar('\n');
	}

	else
	{
		o = 1;
		while (o <= size)

		{
			u = size - o;
			while (u > 0)
			{
			_putchar(' ');
			u--;
			}

			p = o;
			while (p > 0)
			{
			_putchar('#');
			p--;
			}
			_putchar('\n');
			o++;
		}
	}


}



