#include "main.h"
#include <stdio.h>
/**
 * print - recursively print input
 *@i: value to be printed
 *
 * Return: void
 *
 */

void print(long i)
{
	/* If number is smaller than 0, put a sign */
	/* and change number to positive */
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
		/* Remove the last digit aand recur */
	if (i / 10)
		print(i / 10);
	/* Print the last digit */
	_putchar(i % 10 + '0');
}
