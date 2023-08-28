#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @list_head: Pointer to the head of the list
 */
void free_listint(listint_t *list_head)
{
	listint_t *current_node;

	while (list_head != NULL)
	{
		current_node = list_head;
		list_head = list_head->next;
		free(current_node);
	}
}
