#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonal squarre
 * matrix
 * @a: string to be searched
 *@size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, m;
	int long sum1, sum2;


	/* Initializing each element of the pointer array with thr address of the present in other array */
	/*for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			a[i][j] = &a[i][j];
		}
		}*/

	/* printing the sum of the diagonal array using the array of ponters */
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if ( i == j)
				break;
		}
		sum1 += (a[i] + (i * size + j) * 4);
	}

	for (k = size;  k > 0; k--)
	{
		for (m = 0; m < size; m++)
		{
			if (m == (size - 1) - k)
				sum2 += (a[k] + (k * size + m) * 4);
		}
	}
	printf("%ld, %ld \n", sum1, sum2);
}
