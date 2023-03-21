#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: integer to print last digit
 * Return: the value of the last digit
 *
 */
int print_last_digit(int n)
{
	int result;

	result = _abs(n) % 10;
	_putchar(result + '0');
	return (result);
}
