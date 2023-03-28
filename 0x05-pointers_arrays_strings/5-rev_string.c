#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, i, k;
	char tmp;

	len = strlen(s);
	/* reverse */
	i = 0;
	k = len - 1;
	while (i < (len / 2))
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i++;
		k--;
	}
}
