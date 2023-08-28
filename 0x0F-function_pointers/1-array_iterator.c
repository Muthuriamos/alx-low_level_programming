#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a given function as
 * a parameter on each element of an array
 * @size: size of array
 * @array: array to iterate
 * @action: pointer to function to call
 * Return: empty if @array and @action is NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array && action)
	{
		b = 0;
		while (b < size)
		{
			action(array[b]);
			b++;
		}
	}
}
