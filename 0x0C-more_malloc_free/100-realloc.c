#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 * Return: pointer to nw memory
 * NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}

		if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		temp_ptr = ptr;

		for (s = 0; s < old_size; s++)
			new_ptr[s] = temp_ptr[s];

		free(ptr);
		return (new_ptr);
}
