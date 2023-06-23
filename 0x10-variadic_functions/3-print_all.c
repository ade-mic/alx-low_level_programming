#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print anything
 * @format: list of types of arguement passed
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	int n = 0;
	va_list args;
	char *s;
	int len = strlen(format);

	va_start(args, format);
	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			}
			while (n < len - 1 &&
			       (format[n] == 'i' || format[n] == 'c' ||
				format[n] == 'f' || (format[n] == 's' ||
						     format == "(nill)")))
			{
				printf(", ");
				break;
			}
			n++;
		}
		printf("\n");
		va_end(args);
	}
}
