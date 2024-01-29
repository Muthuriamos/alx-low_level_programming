#include "main.h"
/**
 *_strspn - a function that gets the length of a prexif substring.
 * @s: pointer to string input
 * @accept: substring prefix to look for m, n, p.
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, n, p;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		p = 1;
		while (accept[p] != '\0')
		{
			if (s[m] == accept[n])
			{
				p = 0;
				break;
			}
			p++;
		}
		if (p == 1)
			break;
		m++;
	}

	return (m);
}
/*Best*/
