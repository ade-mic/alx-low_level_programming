#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any set of byte
 * @s: string to be searched
 * @accept: character
 *
 * Return: return a pointer the byte in s
 * bytes fom accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len_s, len_accept, i, j;
	char *nbyte;

	len_s = strlen(s);
	len_accept = strlen(accept);
	for (i = 0; i < len_s; i++)
	{
		for (j =  0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
		{
			nbyte = &s[i];
			return (nbyte);
		}
	}
	return (NULL);
}
