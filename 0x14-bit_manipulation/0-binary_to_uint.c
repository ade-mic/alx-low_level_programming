#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 *  or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	i = 0;
	while (b[i] != '\0' && i < len)
	{
		if (b[i] == '1')
			value = (value << 1) | 1;
		else if (b[i] == '0')
			value = value << 1;
		else
			return (0);
		i++;
	}
	return (value);
}
