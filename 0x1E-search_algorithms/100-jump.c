#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search -  a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located else value is
 *  not present in array or if array is NULL, your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev, next, i;

	if (array == NULL)
		return (-1);
	/* size to be jumped */
	step = sqrt(size);

	/* find the block where element is present */
	prev = 0;
	next = step;
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = next;
		next += step;
		if (next > size)
			next = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",\
	       prev - step, next - step);
	/** a linear search for x in block begining with prev */
	for  (i = prev - step; i < next; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* if element is found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * min - return the minimum of two integers
 * @a: first integer
 * @b: second integer
 * Return: always return an Integer
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
