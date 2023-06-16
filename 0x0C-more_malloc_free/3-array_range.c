#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimul values
 * @max: maximum values
 * Return: a pointer to a newly created array
 */
int *array_range(int min, int max)
{
	/* initialize variable that contains the size of array,&loopiterators*/
	int i, min_i;
	/* initialize the memory pointer array of type int */
	int *mem;

	if (min > max)
		return (NULL);

	/* Allocate the memory that can contain size n of int type */
	mem = malloc((max - min) * sizeof(int) + 1);
	if (!mem)
		return (NULL);
	min_i = min;
	for (i = 0; i <= max; i++)
	{
		mem[i] = min_i;
		min_i++;
	}
	return mem;
}
