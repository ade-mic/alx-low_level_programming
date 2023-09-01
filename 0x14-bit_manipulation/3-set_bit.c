#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer to set index to 1
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: new set bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index <= (sizeof(unsigned int) * 8))
	{
		*n = *n | (1 << index);
			return (1);
	}
	return (-1);
}
