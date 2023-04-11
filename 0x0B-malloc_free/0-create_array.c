#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initialized it with a specific
 * char
 * @size: size of the array
 * @c: initializing character
 * Return: a pointer to an array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	ar[0] = c;
	if (ar == NULL)
		return (NULL);
	return (ar);
}
