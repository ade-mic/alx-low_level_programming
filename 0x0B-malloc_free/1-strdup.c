#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to duplicate
 *
 * Return: duplicate of the sting obtained with malloc and can be free
 * with free
 */
char *_strdup(char *str)
{
	char *p;
	size_t i;

	if (str == NULL)
		return (NULL);

	p = malloc(strlen(str) + 1 * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
