/**
 * int_index - a function that searches for an integer
 * @array: an array to search through
 * @size: the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element fot which the cmp function
 *  does not return 0, if not element matches, return -1
 * if size is less than 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
