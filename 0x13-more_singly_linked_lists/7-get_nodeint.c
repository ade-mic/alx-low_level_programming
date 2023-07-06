#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns nth node od a listint_t
 * @head: head node
 * @index: index to be return
 * Return: elements in index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head)
	{
		if (index == 0)
		{
			return (head);
		}
		while (head != NULL && i < index)
		{
			current = head->next;
			head = current;
			i++;
		}
		return(head);
	}
	return (NULL);
}
