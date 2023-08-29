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
	unsigned int q = 0;
	listint_t *current = NULL;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	while (q < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		q++;
	}

	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
