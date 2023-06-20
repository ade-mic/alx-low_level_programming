#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - creates new dog
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *_name, *_owner;

	_name = malloc(strlen(name) + 1);
	_owner = malloc(strlen(owner) + 1);

	if (!_name || !_owner)
		return (NULL);
	/* store a copy of name and owner */
	strcpy(_name, name);
	strcpy(_owner, owner);
	/* allocate memory for new dog data */
	new = malloc(sizeof(struct dog));
	if (!new)
	{
		free(_name);
		free(_owner);
		return (NULL);
	}

	new->name = _name;
	new->age = age;
	new->owner = _owner;
	return (new);
}
