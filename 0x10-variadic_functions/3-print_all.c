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
	char c;
	int i, n, len;
	float f;
	char *s; /** string */
	va_list args;

	va_start(args, format);
	len = strlen(format);
	n = 0;
	if (format)
	{
		while (n < len)
		{
			switch (format[n])
			{
			     case 'c':
				     c = (char) va_arg(args, int);
				     printf("%c", c);
				     break;
			     case 'i':
				     i = va_arg(args, int);
				     printf("%i", i);
				     break;
			     case 'f':
				     f = (float) va_arg(args, double);
				     printf("%f", f);
				     break;
			     case 's':
				     s = va_arg(args, char *);
				     if (s == NULL)
					     printf("(nil)");
				     else
					     printf("%s", s);
				     break;
			}
			while(n < len - 1 && (format[n] == 'i' || format[n] == 'c' || \
					      format[n] == 'f' || format[n] == 's'))
			{
			      printf(", ");
			      break;
			}
			n++;
		}
		printf("\n");
	}
}
