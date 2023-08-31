#include "main.h"
/**
 * get_bit - Gets the value of a bit to 1 at a given inex
 * @n: Pointer to the number you want to modify
 * @index: index of the bit you want to set
 * Return: 1 if success, -1  if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int take;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	take = 1UL << index;
	n = n | take;

	return  (1);
}
