#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - print n ekement of an array of integers, follow by a new line
 *
 * @dest: destination of sting pointer
 * @src: source pointer
 * @n: bytes copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = strncpy(dest, src, n);

	return (tmp);
}
