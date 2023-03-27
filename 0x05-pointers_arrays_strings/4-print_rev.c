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
	char *new_s;

	new_s = s;
	i = strlen(new_s) - 1;
	while (i >= 0)
	{
		printf("%c", new_s[i]);
		i--;
	}
	printf("\n");
}
