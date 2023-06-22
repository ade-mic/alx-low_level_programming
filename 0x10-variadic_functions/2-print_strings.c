#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *yield;

	va_start(arg, n);
	for (i = 0; i < n; ++i)
	{
		yield = va_arg(arg, char*);
		if (yield != NULL)
			printf("%s", yield);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
