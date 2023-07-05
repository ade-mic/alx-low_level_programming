#include "lists.h"
/**
 * free_listint2 - frees listint_t
 * @head: pointer to the list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head)
	{

		while (*head != NULL)
		{
			current = *head;
			*head = current->next;
			free(current);
		}
		*head = NULL;
	}
}
