#include "main.h"
#include <math.h>

/**
 * print_binary - converts a binary to an unsigned int
 * @n: number to printed in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int mask, bit;

	if (n== 0)
		putchar(n + '0');
	else
	{
		mask = 1 << (sizeof(unsigned int) * 8 - 1);
		while(mask > 0)
		{
			bit = (mask & n) ? 1 : 0;
			_putchar(bit + '0');
			mask >>= 1;
		}
	}
}
