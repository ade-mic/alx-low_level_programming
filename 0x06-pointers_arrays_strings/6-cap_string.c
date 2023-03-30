#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 *
 * Return: capitalize sting every word
 */

char *cap_string(char *s)
{
	int len, i;
	char *tmp;

	tmp = s;
	len = strlen(s);

	if (isalpha(tmp[0]))
		tmp[0] = toupper(tmp[0]);
	for (i = 0; i < len; i++)
	{
		if (isspace(tmp[i]) || tmp[i] == ',' || tmp[i] == ';')
			tmp[i + 1] = toupper(tmp[i + 1]);
		if (tmp[i] == '.' || tmp[i] == '!' || tmp[i] == '?')
			tmp[i + 1] = toupper(tmp[i + 1]);
		if (tmp[i] == '"' || tmp[i] == '(' || tmp[i] == ')')
			tmp[i + 1] = toupper(tmp[i + 1]);
		if (tmp[i] == '{' || tmp[i] == '}')
			tmp[i + 1] = toupper(tmp[i + 1]);
	}
	return (tmp);
}
