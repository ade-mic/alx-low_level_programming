#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: size of the array
 *
 * Return: a pointer to an array or null if it fails
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
