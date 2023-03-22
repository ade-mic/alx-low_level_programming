#include "main.h"
#include <stdio.h>
void print(long i);
/**
 * print_times_table - print times table
 *@n: n is integer greater tha 0 and less than  or equal 15
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	int i, j, val;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				val = i * j;
				if (val < 10 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (val < 100 && val >= 10)
					_putchar(' ');
				print(val);
				if (j < n)
				{

					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
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
