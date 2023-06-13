#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char vari)
{
	unsigned int b,c, confirm, place;
	
	confirm = 0;
	
	for (b = 0; s[b] != '\0'; b++)
	{
	place = 0;
	
	for (c = 0; vari[c] != '\0'; c++)
	{
	if (vari[c] == s[b])
	{
		confirm++;
		place = 1;
	}
	}
}
}
