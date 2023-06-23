#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print anything
 *
 * @format: list of types of arguement passed
 * Return: Nothing
 */

void print_all(const char *const format, ...)
{
	char c;
	int i;
	float f;
	char *s; /** string */
	int n,len; /** to iterate through format */
	va_list args;

	va_start(args, format);
	len = strlen(format);
	n = 0;

	while (n < len)
	{
		if (format[n] == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%c", c);
		}
		else if (format[n] == 'i')
		{
			i = va_arg(args, int);
			printf("%i", i);
		}
		else if (format[n] == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%f", f);
		}
		else if (format[n] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		while (n < len - 1 && ( format[n] == 'c' || format[n] == 'i' ||\
					format[n] == 'f' || format[n] == 's'))
		{
			printf(", ");
			break;
		}
		n++;
	}
	va_end(args);
	printf("\n");
}
