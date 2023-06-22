#include <stdarg.h>
/**
 * sum_them_all - sum all arguements provided
 * @n: number of arguement
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
