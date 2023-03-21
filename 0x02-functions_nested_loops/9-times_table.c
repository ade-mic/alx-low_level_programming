#include "main.h"
#include <stdlib.h>
/**
 * times_table - print 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			val = (i + 0) * (j + 0);
			if (val / 10 == 0 && j != 0)
				_putchar(' ');
			else if (val / 10 > 0)
				_putchar('0' + val / 10);
			_putchar('0' + val % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
