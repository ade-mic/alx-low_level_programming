#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error eccured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	unsigned int  bit;


	if (n)
	{
		mask = 1 << index;
		if (index == 0)
			bit = 0;
		else
			bit = (mask & n) ? 1 : 0;
		return (bit);
	}
	return (-1);
}