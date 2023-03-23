#include <ctype.h>

/**
 * _isdigit - checks if digit
 *
 * @c: character check
 * Return: 1 if c uppercase
 *
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
