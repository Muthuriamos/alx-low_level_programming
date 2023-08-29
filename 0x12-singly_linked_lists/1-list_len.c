#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of nodes
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
