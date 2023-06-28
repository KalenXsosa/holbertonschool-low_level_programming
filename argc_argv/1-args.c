#include "main.h"
#include <stdio.h>

/**
* main - prototype
* @argc: count
* @argv: vector
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[argc] - 1);

	return (0);
}
