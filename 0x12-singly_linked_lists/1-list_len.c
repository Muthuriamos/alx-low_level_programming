#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of nodes
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
