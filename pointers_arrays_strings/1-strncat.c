#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: ko
 * @src: lol
 * @n:ju
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int happy = 0;
	int sad = 0;

	while (dest[happy++])
	{
	sad++;
	}
	for (happy = 0; src[happy] && happy < n; happy++)
	{
	dest[sad++] = src[happy];
	}
	return (dest);
}
