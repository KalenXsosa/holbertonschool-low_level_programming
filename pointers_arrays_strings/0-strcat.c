#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: ko
 * @src: lo
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int ino = 0;

	int desi = 0;

	while (dest[desi] != '\0')
	{
	desi++;
	}
	for (ino = 0; src[ino] != '\0'; ino++)
	{
	dest[desi++] = src[ino];
	}
	return (dest);
}


