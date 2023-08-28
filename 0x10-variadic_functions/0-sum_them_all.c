#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: start of input variables
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mp;

	unsigned int index, sum = 0;

	va_start(mp, n);

	for (index = 0; index < n; index++)
		sum += va_arg(mp, int);
	va_end(mp);

	return (sum);
}
