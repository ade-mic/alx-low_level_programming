#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 * On error, -1 is retutned, and errno is set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
