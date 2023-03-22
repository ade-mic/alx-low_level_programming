#include <stdio.h>
#include "main.h"
void print(long i);
void natural_numbers(void);
/**
 * main - program entrance
 *
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	natural_numbers();
	return (0);
}
/**
 * natural_numbers - print sum of natural numbers below 1024
 *
 *
 * Return: void
 *
 */

void natural_numbers(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	print(sum);
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
