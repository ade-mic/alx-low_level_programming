#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: character
 *
 * Return: a pointer to the first occurence of the character c in
 * the sting s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int len, i;
	char *p;

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (NULL);
}
