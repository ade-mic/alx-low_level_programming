#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers followed by a a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!separator)
		exit(1);
	if (n == 0)
		exit(1);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
