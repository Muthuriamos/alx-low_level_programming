#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @n: unsigned int var the number of bytes to be filled
 *
 * @s: input pointer to char type represents the pointer to the
 * block of memory to fill
 *
 * @b: input var of char type represents the character to fill
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
		s[z] = b;

	return (s);
}
