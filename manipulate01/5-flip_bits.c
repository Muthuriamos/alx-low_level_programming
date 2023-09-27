#include "main.h"
/**
 * flip_bits - Calculate the number of bits needed to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int dice = 0;

	while (diff != 0)
	{
		dice += diff & 1;
		diff >>= 1;
	}
	return (dice);
}
