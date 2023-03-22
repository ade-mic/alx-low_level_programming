#include <stdio.h>
#include "main.h"
void print(long i);
void fibonacci_50(void);
/**
 * main - program entrance
 *
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	fibonacci_50();
	return (0);
}
/**
 * fibonacci_50 - print first fibonacci number starting with 1 and 2
 *
 *
 * Return: void
 *
 */

void fibonacci_50(void)
{
	int i, j;

	i = 1;
	for (j = 0; j < 50; j++)
	{
		i += j;
		print(i);
		if (j < 49)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
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
