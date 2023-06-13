#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char *accept)
{
	unsigned int b,c, value, check;

	value = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
	check = 0;

	for (c = 0; accept[c] != '\0'; c++)
	{
	if (accept[c] == s[b])
	{
		value++;
		check = 1;
	}
	}
}
}
