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
	int **q;
	int *p;
	int i;

	if (width == 0 || height == 0)
		return (NULL);
	q = malloc(height * sizeof(int*));
	if (!q)
		return (NULL);
	p = malloc(width * sizeof(int));
	if (!p)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		q[i] = p;
	}
	return (q);
}
