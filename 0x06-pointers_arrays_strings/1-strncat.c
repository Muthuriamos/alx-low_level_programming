#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, m;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[a + m] = src[m];
	}
	dest[a + m] = '\0';
	return (dest);
}
