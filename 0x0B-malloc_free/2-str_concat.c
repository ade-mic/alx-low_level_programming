#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *str_concat - returns a pointer to a newly allocated space in memory
 * which contains contents of s1
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to new array or null if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j, size1, size2;
	int size;

	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2;
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= size1; i++)
	{
		if (s1[i] == '\0')
		{
			ar[i] = s2[0];
			break;
		}
		else
		{
			ar[i] = s1[i];
		}
	}
	for (j = 1; j < size2; j++)
	{
		ar[size1 + j] = s2[j];
	}
	return (ar);
}
