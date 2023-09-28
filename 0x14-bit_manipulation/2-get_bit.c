#include "main.h"
/**
 * get_bit - Gets the value of a bit
 * @n: the number you want to search
 * @index: index of the bit you want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int take;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	take = (n >> index) & 1;

	return  (take);
}
