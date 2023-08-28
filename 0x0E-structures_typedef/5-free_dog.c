#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free struct pointer
 * @b: pointer to free
 * Return: nothing
 */
void free_dog(dog_t *b)
{
	if (b)
	{
		free(b->name);
		free(b->owner);
		free(b);
	}
}
