#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: Printing to a string of 0 and 1 chars
 *
 * Return: Converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int q;

	q = 0;
	if (!b)
		return (0);
	for (g = 0; b[g] != '\0'; g++)
	{
		if (b[g] != '0' && b[g] != '1')
			return (0);
	}
	for (g = 0; b[g] != '\0'; g++)
	{
		q <<= 1;
		if (b[g] == '1')
			q += 1;
	}
	return (q);
}

