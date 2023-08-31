#include "main.h"
/**
 * set_bit - the value of a bit to 1 at a give index
 * @index: Starting from 0 of the bit you want to set
 * @n: Pointer number of g
 * Return: 1 if worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dice;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (1);

	dice = 1UL << index;
	*n |= dice;

	return (1);
}
