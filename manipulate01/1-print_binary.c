#include "main.h"

/**
 * print_binary - Prints the binary
 * @n: Checking bits
 * Return: The value of the bit at the given ondex or -1
 *
 */
void print_binary(unsigned long n)
{
	unsigned long mask = 1UL << (sizeof(unsigned long) * 8 - 1);
	int mist = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			mist = 1;
			_putchar('1');
		}
		else if (mist)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
