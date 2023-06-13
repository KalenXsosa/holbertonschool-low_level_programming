#include "main.h"
#include <stdio.h>

/**
 *_memcpy - pop
 *@dest: jio
 *@src: nip
 *@n:pop
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
	dest[b] = src[b];
	}
	return (dest);
}

