#include "lists.h"
/**
 * free_listint - frees a listint_t
 * @head: pointer of link list
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *nextnode;

	current = head;
	while(current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}
