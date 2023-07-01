#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @str: strings to be added to new list
 * @head: pointer to head of the linked list
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{

			current = current->next;
		}
		current->next = new;
	}
	return (new);

}
