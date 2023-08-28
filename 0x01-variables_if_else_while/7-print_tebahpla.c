#include <stdio.h>
/**
 * main -program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 *Return: always 0
 */

int main(void)

{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
