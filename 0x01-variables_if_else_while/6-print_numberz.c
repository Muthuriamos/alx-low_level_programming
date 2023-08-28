#include <stdio.h>

/**
 * main - programprinting single numbers from 0 to 10.
 *
 * Return: always 0.
 */
int main(void)
{
	int (num);

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
