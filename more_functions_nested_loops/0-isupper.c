#include "main.h"
#include <stdio.h>
/**
 * main - checks uppercase
 * @c: c checks upper letter
 * Return: Always 0.
 */
int _isupper(int c)

{

for (c = 'A'; c <= 'Z'; c++)

c = _islower(c);
_putchar(c);

}
