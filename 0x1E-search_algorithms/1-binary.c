#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located else
 * If value is not present in array or if array is NULL,
 *  function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j;
	size_t n =  size - 1;
	int mid;

	if (array == NULL)
		return (-1);
	while (i <= n)
	{
		/* calculate the mid */
		mid = i + (n - i) / 2;
		printf("Searching in array: ");
		for (j = i; j <= n; j++)
		{
			printf("%d", array[j]);
			if (j != n)
				printf(", ");
			else
				printf("\n");
		}
		/* compare the mid element with value */
		if (value == array[mid])
			return (value);
		if (value < array[mid])
			n = mid - 1;
		else
			i = mid + 1;
	}
	return (-1);
}
