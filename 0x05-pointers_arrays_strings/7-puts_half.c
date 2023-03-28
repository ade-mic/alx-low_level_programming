#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints everyother character of a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void puts_half(char *s)
{
	int len, i, k;
	char *tmp;

	len = strlen(s);
	tmp = s;
	k = len - 1;
	i = k / 2;
	while (i < k)
	{
		_putchar(tmp[i]);
		i++;
	}
	_putchar('\n');
}
