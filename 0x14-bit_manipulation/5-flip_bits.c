#include "main.h"
/**
 * flip_bits - Calculate the number of bits needed to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, dice;
	unsigned int g, q;

	g = 0;
	dice = 1;
	diff = n ^ m;

	for (q = 0; q <= (sizeof(unsigned long int) * 8); q++)
	{
		if (dice == (diff & dice))
			g++;
		dice <<= 1;
	}

	return (g);
}
