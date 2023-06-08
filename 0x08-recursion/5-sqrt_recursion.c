#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * _sqrt_recursion - returns tthe natural square root of a number
 * @n: natural number
 * @x: for initial guess
 * Return: int
 */
int update(int n, float x);

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0 || (n % 10) == 2 ||  (n % 10) == 3)
		return (-1);
	else if ((n % 10) == 7 || (n % 10) == 8)
		return (-1);
	return (update(n, n / 2));
}

/**
 * update - update square root
 * @n: natural number
 * @x: innitial guess
 * Return: int
 */

int update(int n, float x)
{
	float x1;

	x1 = (x + (n / x)) / 2;

	if (fabs(x1 - x) < 0.01)
		return (x);
	return (update(n, x1));
}
