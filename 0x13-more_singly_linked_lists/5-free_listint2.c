#include "lists.h"
/**
 * free_listint2 - frees listint_t
 * @head: pointer to the list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *current;


	current = *head;
	while (current != NULL)
	{
		node = current;
		current = current->next;
		free(node);
	}
	*head = NULL;
}
