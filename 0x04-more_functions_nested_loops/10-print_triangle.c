#include "main.h"
/**
 * print_triangle - print a diagonal line
 *@n: number of ties _ to be printed
 * Return: void
 *
 */

void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				for (j = n - 1; j > i; j--)
				{
					_putchar(' ');
				}
				for (j = 0; j <= i; j++)
				{
					_putchar('#');
				}
			}
			if (i < n)
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
