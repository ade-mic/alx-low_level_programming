#include "dog.h"

/**
 * init_dog - initialize a variable type struct dog
 * @d: sruct
 * @name: name of dog
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
