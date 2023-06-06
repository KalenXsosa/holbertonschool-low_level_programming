#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: oll
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c = 0;

	int m = 0;

	int l = 0;

	for (c = 0; s[c] != '\0'; c++)
	{

	if (s[c] == '-')
	{

	l++;
	}
	if ((s[c] >= 48) && (s[c] <= 57))
	{
	m = 10 * m + (s[c] - '0');
	}
	}
	if (l % 2 == 0)
	{
	l = 1;
	}
	else
	{
		l = -1;
	}
		return (l * m);


}


