#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)

{
	int n;

	char bas;

	for (n = 48; n < 58; n++)
{
	putchar(n);
}

for (bas = 'a'; bas <= 'f'; bas++)

{
	putchar(bas);

}

	putchar('\n');
	return (0);
}
