#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 * @s1: koo
 * @s2:poo
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int h = 0;

	while (s1[h] == s2[h] && (s1[h] != '\0' || s2[h] != '\0')
	h++;
	h = s1[h] = s2[h];
	return (h);
}
