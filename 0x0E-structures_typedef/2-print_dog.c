#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: nil\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: nil\n");
	else
		printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: nill\n");
	else
		printf("Owner: %s\n", d->owner);
}
