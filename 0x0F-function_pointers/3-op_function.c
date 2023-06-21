#include <stdlib.h>

/**
 * op_add - sum two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find the difference of two integerrs
 * @a: first integers
 * @b: second integers
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find the product of two integerrs
 * @a: first integers
 * @b: second integers
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: integers
 * @b: divisor
 *
 * Return: the result of the divsion of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of a division operation
 * @a: integers
 * @b: divisor
 *
 * Return: the remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
