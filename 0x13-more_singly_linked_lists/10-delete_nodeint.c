#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in the list
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to be deleted
 * Return: 1 if the node was deleted was deleted successfully, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int q;
	listint_t *current, *previous;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = NULL;

	if (index ==0)

	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (q = 0; current != NULL && q < index; q++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
