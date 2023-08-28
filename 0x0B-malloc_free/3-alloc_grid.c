#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **amo;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	amo = (int **)malloc(height * sizeof(int *));

	if (amo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		amo[x] = (int *)malloc(width * sizeof(int));
		if (amo[x] == NULL)
		{
			for (y = 0; y <= x; y++)
				free(amo[y]);
			free(amo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			amo[x][y] = 0;
		}
	}
	return (amo);
}
