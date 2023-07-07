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
	unsigned int mask;
	int skip = 0;

	if (n == 0)
		putchar(n + '0');
	else
	{
		mask = 1 << (sizeof(unsigned int) * 8 - 1);
		while (mask > 0 && n > 0)
		{
			if (n & mask)
			{
				skip = 1;
				_putchar(1 + '0');
			}
			else
			{
				if (skip)
					_putchar('0');
			}
			mask >>= 1;
		}
	}
}
