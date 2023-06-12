#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 * @s: nnn
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
    s[i] += (s[i] == 'a' || s[i] == 'A') ? 4 :
             (s[i] == 'e' || s[i] == 'E') ? 3 :
             (s[i] == 'o' || s[i] == 'O') ? 0 :
             (s[i] == 't' || s[i] == 'T') ? 7 :
             (s[i] == 'l' || s[i] == 'L') ? 1 : 0;
}
}
