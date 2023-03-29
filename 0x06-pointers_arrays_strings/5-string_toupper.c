#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letter of a string to uppercase
 *
 * @s: string
 *
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int len, i, end;
	char *tmp;

	tmp = s;
	len = strlen(s);
	i = 0;
	end = len;

	while (i < end)
	{
		tmp[i] = toupper(s[i]);
		i++;
	}
	return (tmp);
}
