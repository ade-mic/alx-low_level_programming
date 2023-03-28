#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints everyother character of a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void puts2(char *s)
{
	int len, i, k;
	char *tmp;

	len = strlen(s);
	tmp = s;
	/* reverse */
	i = 0;
	k = len - 1;
	while (i <= k)
	{
		if(i % 2 == 0)
			_putchar(tmp[i]);
		i++;
	}
	_putchar('\n');
}
