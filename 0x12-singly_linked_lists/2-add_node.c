#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @str: strings to be added to new list
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	/** point new to first old node to make it first node**/
	new->next = *head;
	/** update head to new **/
	*head = new;
	return (new);
}
