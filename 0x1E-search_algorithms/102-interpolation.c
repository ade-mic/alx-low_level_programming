#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search -  a function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * sorted array of integers using the Binary search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located else
 * If value is not present in array or if array is NULL,
 *  function must return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			/* condition meets target */
			if (array[low] == value)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       low, array[low]);
				return (low);
			}
			return (-1);
		}
		/* calculating position */
		pos = low + (((double)(high - low) / (array[high] -
						      array[low])) *
			     (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high]
						      - array[low])) *
			     (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
