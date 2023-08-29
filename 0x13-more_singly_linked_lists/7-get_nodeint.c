#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listiny_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 * Return: Pointer to nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q;
	listint_t *current = head;

	while (current && q < index)
	{
		current = current->next;
		q++;
	}

	return (current ? current : NULL);
}
