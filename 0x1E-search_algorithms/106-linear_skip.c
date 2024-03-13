#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	express = list->express;
	current = list;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		   express->index, express->n);
		if (express->n >= value || express->express == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       current->index, express->index);
			break;
		}
		current = express;
		express = express->express;
	}

	if (express == NULL)
	{
		while (current->next != NULL)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       current->index, current->index + 1);
	}

	while (current != NULL && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
