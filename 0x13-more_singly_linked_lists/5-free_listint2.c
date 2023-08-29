#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint list and sets the head pointer to NULL
 * @head: Pointer to thr head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
