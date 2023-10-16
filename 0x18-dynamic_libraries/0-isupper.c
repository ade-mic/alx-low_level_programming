#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: character check
 * Return: 1 if c uppercase
 *
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
