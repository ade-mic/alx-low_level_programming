#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: destination of sting pointer
 * @src: source pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = strcat(dest, src);

	return (tmp);
}
