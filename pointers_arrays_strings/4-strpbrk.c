#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *@s: lol
 * @accept: pop
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
	for (l = 0; accept[l]; l++)
	{
	if (*s == accept[l])
	return (s);
	}
	s++;
	}
	return ('\0');
	}
