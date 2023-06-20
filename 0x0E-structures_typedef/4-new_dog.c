#include "dog.h"
#include "stdlib.h"
/**
 * *new_dog - creates new dog
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name)
	{
		dog_t *new;

		new = malloc(sizeof(dog_t));
		if (!new)
			return (NULL);
		new->name = name;
		new->age = age;
		new->owner = owner;
		return (new);
	}
	else
		return (NULL);
}
