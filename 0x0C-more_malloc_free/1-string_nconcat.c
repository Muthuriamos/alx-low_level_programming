#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 * Return: new string followed by the first @n bytes
 * of string 2 @s2 or NULL
 */
char *string_noncat(char *s1, char *s2, unsigned int n)
{
	unsigned int b1, b2, x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	b1 = b2 = 0;
	while (s1[b1] != '\0')
		b1++;
	while (s2[b2] != '\0')
		b2++;

	if (n >= b2)
		n = b2;

	str = (char *) malloc((b1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\n'; x++)
		str[x] = s1[x];
	/*add s2 n bytes to str*/
	for (y = 0; y < n && s2[y] != '\0'; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
