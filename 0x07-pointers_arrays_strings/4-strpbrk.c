#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
		int k;
				while (*s)
							{
											for (k = 0; accept[k]; k++)
															{
																				if (*s == accept[k])
																										return (s);
																							}
														s++;
																}
					return (NULL);
}
/*coding for life*/
