#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *org;
	unsigned int k, hom;

	k = 0;
	hom = 0;

	if (str == NULL)
		return (NULL);

	while (str[hom])
		hom++;

	org = malloc(sizeof(char) * (hom + 1));

	if (org == NULL)
		return (NULL);

	while ((org[k] = str[k]) != '\0')
		k++;

	return (org);
}
