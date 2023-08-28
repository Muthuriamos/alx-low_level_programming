#include <stdio.h>

/**
 * main - a program printing alphabet in lowercase exempting q n e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar (letter);
	putchar('\n');

	return (0);
}

