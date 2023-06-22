#include <stdlib.h>
/**
 * array_iterator - a function that executes a function given as aparament on
 * on each element of an array
 * @array: array
 * @size: sice of the array
 * @action: function to be executed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
