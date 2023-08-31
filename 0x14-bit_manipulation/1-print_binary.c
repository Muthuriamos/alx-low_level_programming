#include "main.h"

/**
 * get_bit -Returns the value of a bit at a given index
 * @n: Checking bits
 * @index: Which to check bit
 * Return: The value of the bit at the given ondex or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, mist;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	mist = n & mask;

	if (mist == mask)
		return (1);

	return (0);
}


