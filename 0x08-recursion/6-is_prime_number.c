#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * is_prime_recursive - check if prime number
 * @n: natural number
 * @divisor: divides n
 * Return: 1 if true and 0 otherwise
 */

int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
		return (0);
	else if (divisor == 1)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - check if prime number
 * @n: natural number
 *
 * Return: 1 if true and 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
