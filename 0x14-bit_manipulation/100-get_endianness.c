#include "main.h"

/**
 * get_endiannes - checks the endiannes
 *
 * Return: c
 */
int get_endiannes(void)
{
	unsigned int q = 1;
	unsigned char *c = (unsigned char *)&q;

	return (*c == 1);
}
