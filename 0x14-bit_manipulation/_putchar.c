#include <unistd.h>
/**
 * _putchar - prints a character to the console
 *
 * return the number of bytes stream
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
