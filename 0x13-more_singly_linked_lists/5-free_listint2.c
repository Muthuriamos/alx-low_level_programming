#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint list and sets the head pointer to NULL
 * @head_ptr: Pointer to thr head of the list
 */
void free_listint2(listint_t **head_ptr)
{
	listint_t *current_node, *temp_node;

	if (head_ptr != NULL)
	{
		current_node = *head_ptr;

		while (current_node != NULL)
		{
			temp_node = current_node;
			curent_node = current_node->next;
			free(temp_node);
		}

		*head_ptr = NULL;
	}
}
