#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - check the code
 * @dest: po
 * @src: lo
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	dest[i] = '\0';

	return (dest);
	}


