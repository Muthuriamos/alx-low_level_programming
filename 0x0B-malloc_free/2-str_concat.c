#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL(Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *A4;
	unsigned int k = 0, m = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	A4 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (A4 == NULL)
		return (NULL);
	k = 0;
	m = 0;

	if (s1)
	{
		while (k < len1)
		{
			A4[k] = s1[k];
			k++;
		}
	}

	if (s2)
	{
		while (k < (len1 + len2))
		{
			A4[k] = s2[m];
			k++;
			m++;
		}
	}
	A4[k] = '\0';
	return (A4);
}
