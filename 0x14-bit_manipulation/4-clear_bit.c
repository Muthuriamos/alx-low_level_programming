#include "main.h"
#include <stddef.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number whose bit you want to clear
 * @index: Starting from 0 of the bit you want to clear
 * Return: 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dice = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 - 1 || n == NULL)
		return (-1);
	*n = *n & (~dice);
	return (1);
}
