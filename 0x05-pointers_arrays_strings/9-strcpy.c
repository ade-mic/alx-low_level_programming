#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - print n ekement of an array of integers, follow by a new line
 *
 * @dest: destination of sting pointer
 * @src: source pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = strcpy(dest, src);
	return (tmp);
}
