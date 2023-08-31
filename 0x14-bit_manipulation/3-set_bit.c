#include <stdio.h>
#include "main.h"
/**
 * set_bit - the value of a bit to 1 at a give index
 * @index: Starting from 0 of the bit you want to set
 * @n: Pointer number of g
 * Return: 1 if worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
int main(void)
{
	unsigned long g = 0;

	if (set_bit(&g, 2) == 1)
		printf("%lu\n", g);

	if (set_bit(&g, 10) == 1)
		printf("%lu\n", g);

	printf("99\n");

	return (0);
}
