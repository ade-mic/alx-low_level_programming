#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * _strspn - locates a character in a string
 * @s: string to be searched
 * @accept: character
 *
 * Return: number of bytes in the initial segment of s which consisst only
 * bytes fom accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len_s, len_accept, i, j;
	unsigned int nbyte;

	len_s = strlen(s);
	nbyte = 0;
	len_accept = strlen(accept);
	for (i = 0; i <= len_accept; i++)
	{
		for (j =  0; j <= len_s; j++)
		{
			if (accept[i] == s[j])
			{
				break;
			}
		}
		nbyte++;
	}
	return (nbyte);
}
