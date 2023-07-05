#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t
 * @head: head node
 * Return: elements in index
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;

	if (head)
	{
		while (head != NULL)
		{
			i += head->n;
			head = head->next;
		}
		return (i);
	}
	return (0);
}
