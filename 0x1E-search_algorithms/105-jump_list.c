#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump, prev_index;
	listint_t *current, *prev;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev_index = 0;

	while (current->next < size && current->n < value)
	{
		prev = current;
		prev_index = current->index;
		for (i = 0; current->next && i < jump; ++i)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev_index, current->index);

	printf("Value checked at index [%lu] = [%d]\n",
	       prev_index, prev->n);
	while (prev->index < size && prev->index <= current->index &&
	       prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
