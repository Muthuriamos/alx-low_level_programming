#include "main.h"
#include <stdlib.h>
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, i, w;

	flag = 0;
	w = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int k, m = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (k = 0; k <= len; k++)
	{
		if (str[k] == ' ' || str[k] == '\0')
		{
			if (x)
			{
				end = k;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - k;
				m++;
				k = 0;
			}
		}
			else if (k++ == 0)
				start = k;
		}

	matrix[m] = NULL;

	return (matrix);
}
