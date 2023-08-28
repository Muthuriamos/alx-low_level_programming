#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min of elements
 * @max: max number of elements
 * Return: array pointer address
 * NULL if it fails
 */
int *array_range(int min, int max)
{
	int c, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (c = 0; min <= max; c++)
	{
		array[c] = min;
		min++;
	}
	return (array);
}
