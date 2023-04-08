#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings by using most n bytes
 * from src
 *
 * @dest: destination of sting pointer
 * @src: source pointer
 * @n: nbyes to be appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = strncat(dest, src, n);

	return (tmp);
}
