#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *  @s: input pointer thta represents memory
 *  block to fill
 *  @b: characters to fill
 *  @n: number of bytes to be filled
 *  Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
		s[q] = b;
	return (s);
}
/**
 * _calloc - a function that allocates memory for an array using malloc
 * It is basically the equivalent to malloc followed by memset
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer with new allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;

		if (nmemb == 0 || size == 0)
			return (NULL);

	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);

	_memset(k, 0, nmemb * size);

	return (k);
}
