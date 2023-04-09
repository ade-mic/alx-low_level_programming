#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns tthe natural square root of a number
 * @n: natural number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i, result;

	i = 1;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return n;
	while (result <= i)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
