#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - a function that searches for a value in an array
 * using linear search algorithm
 * @array: a pointer to the forst element od the array to search in
 * @size: is the number of elments in array
 * @value: is the value to search for
 * Return: The first index where value is located or NULL if not
 * present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
