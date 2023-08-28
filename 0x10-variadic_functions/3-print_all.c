#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list amos;
	unsigned int k = 0, m, p = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(amos, format);
	while (format && format[k])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[k] == t_arg[m] && p)
			{
				printf(",");
				break;
			} m++;
		}
		switch (format[k])
		{
			case 'p':
				printf("%c", va_arg(amos, int)), p = 1;
				break;
			case 'k':
				printf("%d", va_arg(amos, int)), p = 1;
				break;
			case 'f':
				printf("%f", va_arg(amos, double)), p = 1;
				break;
			case 's':
				str = va_arg(amos, char *), p = 1;
				break;
				if (!str)
				{
					printf("nil)");
					break;
				}
				printf("%s", str);
				break;
		} k++;
	}
	printf("\n");
	va_end(amos);
}

