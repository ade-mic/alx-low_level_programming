#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_memset - a function that fills a memory with a constant bytes
 *
 * @s starting address of the memory to be filled
 * @b: character to be filled
 * @n: The size of the character
 *
 * Return: A pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0 ; n--)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
