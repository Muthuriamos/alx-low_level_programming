#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a function that concatenates
 * all the arguments
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *homg;
	int c, p, q, total;

	if (ac == 0 || av == (NULL))
	return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; *(*(av + p) + q) != '\0'; q++, total++)
		total++;
	}
	total++;

	c = malloc(total * sizeof(char));
	if (c == NULL)
		return (NULL);

	homg = c;
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			*c = '\n';
			c++;
		}
	}

		return (homg);
}

