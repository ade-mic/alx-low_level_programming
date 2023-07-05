#include "lists.h"
/**
 * get_nodeiint_at_index - a function that returns nth node od a listint_t
 * @head: head node
 * @index: index to be return
 * Return: elements in index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while(head->next != NULL)
		{
			head = head->next;
			i++;
			if(i == index)
				return(head);
		}
	}
	return (head);
}
