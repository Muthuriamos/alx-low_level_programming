#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: unsigned int var the number of bytes to be filled
 *
 * @s: input pointer to char type represents the pointer
 * to the block of memory to fill
 * @b: input var of char type reps the character to fill
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	s[k] = b;
	k++;
}
return (s);
}
/*prosper@son*/
