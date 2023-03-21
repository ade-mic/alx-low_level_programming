#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: integer to print last digit
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int result;

	result = labs(n) % 10;
	_putchar(result + '0');
	return (result);
}
