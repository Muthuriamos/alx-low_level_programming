#include "main.h"

/**
 * get_endiannes - checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endiannes(void)
{
	int g;
	char *c;

	g = 1;
	c = (char *)&g;

	return (*c);
}
