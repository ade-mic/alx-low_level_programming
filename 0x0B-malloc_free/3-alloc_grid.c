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

	po = malloc(height * sizeof(p));
	if (po == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		p = malloc(width * sizeof(width));
		if (p == NULL)
			return (NULL);
		for (i = 0; i < width; i++)
			p[i] = 0;
		po[j] = p;
	}
	return (po);
}
