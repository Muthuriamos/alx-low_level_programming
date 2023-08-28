#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @c: amount of bytes
 * Return: pointer to new allocated memory
 * exit with 98 if malloc fails
 */
void *malloc_checked(unsigned int c)
{
	void *mem;

	mem = malloc(c);
	if (mem == NULL)
		exit(98);
	return (mem);
}
