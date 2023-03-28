#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - print n ekement of an array of integers, follow by a new line
 *
 * @n: number of elements of the array to be printed
 * @a: array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
