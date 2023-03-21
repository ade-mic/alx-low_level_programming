#include <ctype.h>

/**
 * _islower - check for lower case character
 * @c: the character to check
 * Return: 1 if c is lowercase
 * otherwise 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
