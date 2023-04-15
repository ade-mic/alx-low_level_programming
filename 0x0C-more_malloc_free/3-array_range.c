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
	int n, i, min_i;
	/* initialize the memory pointer array of type int */
	int *mem;

	n = max - min + 1;
	min_i = min;
	/* Allocate the memory that can contain size n of int type */
	mem = malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		mem[i] = min_i;
		min_i++;
	}
	return mem;
}
