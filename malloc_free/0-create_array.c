#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
