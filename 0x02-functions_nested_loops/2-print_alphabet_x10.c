#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	char am;
	int x;

	x = 0;
	while (x < 10)
	{
		am = 'a';
		while (am <= 'z')
		{
			_putchar(am);
			am++;
		}
		_putchar('\n');
		x++;
	}

}

