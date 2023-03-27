#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	putchar('\n');
}
