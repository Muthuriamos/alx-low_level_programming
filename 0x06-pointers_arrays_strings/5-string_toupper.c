#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{

	int m;

m = 0;
	while (*(s + m))
	{
		if (*(s + m) >= 'a' && *(s + m) <= 'z')
			*(s + m) -= 'a' - 'A';
		m++;
	}
	return (s);
}
