#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base value
 * @y: power value
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
