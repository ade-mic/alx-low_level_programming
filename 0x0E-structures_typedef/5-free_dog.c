#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memoey alocated to type dog_t
 * @d: pointer of type dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
