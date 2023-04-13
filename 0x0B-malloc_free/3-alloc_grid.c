#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @width: size of the array
 * @height: size of array
 *
 * Return: a pointer to an array or null if it fails
 */
int **alloc_grid(int width, int height)
{
	int *mal1;
	int **mal2;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mal2 = malloc(height * sizeof(mal1));
	if (!mal2)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mal1 = malloc(width * sizeof(int));
		if (!mal1)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			mal1[j] = 0;
		}
		mal2[i] = mal1;
	}
	return (mal2);
}
