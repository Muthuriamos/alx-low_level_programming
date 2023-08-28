#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function printing numbers,
 * followed by a new line
 * @separator: pointer to constant separator
 * @n: start of input variables
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;

	va_start(ap, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && k != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
