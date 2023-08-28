#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
		unsigned int k = 0, l = 0;

			while (haystack[k])
					{
								while (needle[l] && (haystack[i] == needle[0]))
											{
															if (haystack[k + l] == needle[l])
																				l++;
																		else
																							break;
																				}
										if (needle[l])
													{
																	k++;
																				l = 0;
																						}
												else
																return (haystack + k);
													}
				return (0);
}
/*coding for life*/
