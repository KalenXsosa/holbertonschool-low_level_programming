#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: pop
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *str;
	int len;

	str = "my first strlen";
	len = strlen(str);
	printf("%d\n", len);
	return (0);
}

