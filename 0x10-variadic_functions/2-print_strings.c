#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function printing strings followed by a new line
 * @separator: pointer to a constant separator
 * @n: start of input variables
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mp;
	unsigned int x;
	char *str;

	va_start(mp, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(mp, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil)");

		if (separator && x != n - 1)
			printf("%s", separator);
	}
	va_end(mp);
	printf("\n");
}
