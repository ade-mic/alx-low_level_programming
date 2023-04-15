#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: string 1
 * @size: string 2
 * Return: pointer to new memory allocation
 */
char *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	/* check string */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate memory */
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		/* Assign 0 to allocated memory */
		mem[i] = NULL;
	}
	return (mem);
}
