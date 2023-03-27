#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first ineger
 * @b: second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp_a, tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_b;
	*b = tmp_a;
}
