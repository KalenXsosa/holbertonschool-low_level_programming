#include "main.h"

/**
 * puts2 - check the code
 * @str: no
 * Return: Always 0.
 */
void puts2(char *str)
{
        int k;
        int q = 0;

        while (str[q] != '\0')
        {
        q++;
        }

        for (k = 0; k < q; k += 2)
        {
        _putchar(str[k]);
        }
        _putchar('\n');
}
