#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in a linked list
 * @h: pointer of the first node
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	if (h == NULL)
		return (0);
	
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		m++;
	}

	return (m);
}
