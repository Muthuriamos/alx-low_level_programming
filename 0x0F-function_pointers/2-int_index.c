#include "function_pointers.h"
/**
 * int_index - a function that searches an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function call to check index in array
 * if it compares
 * Return: Always 0 (Succes)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

				k++;
			}
		}
	}

	return (-1);
}


