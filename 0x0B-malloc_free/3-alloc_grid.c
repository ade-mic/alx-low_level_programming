#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dim arr of int
 * @width: width of array
 * @height: height of array
 * Return: pointer to a pointer of array of int
 */

int **alloc_grid(int width, int height)
{
	int *p;
	int **po;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	po = malloc(height * sizeof(int*));
	if (!po)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p = malloc(width * sizeof(int));
		if (!p)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			p[j] = 0;
		}
		po[i] = p;
	}
	return po;
}
