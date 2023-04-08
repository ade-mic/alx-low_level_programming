#include <ctype.h>

/**
 * _isalpha - check for alphabetic character
 * @c: the character to check
 * Return: 1 if c is lowercase ot uppercase
 * otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
