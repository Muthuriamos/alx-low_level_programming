#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all elements of a listinit_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_count++;
		h = h->next;
	}
	return (n_count);
}
