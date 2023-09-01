#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: dice
 */
int get_endianness(void)
{
	unsigned int q = 1;
	unsigned char *dice = (unsigned char *)&q;

	return (*dice == 1);
}
