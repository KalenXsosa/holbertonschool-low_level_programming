#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: go
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
