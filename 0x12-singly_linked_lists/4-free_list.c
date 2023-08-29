#include "lists.h"

/**
 * free_list - free single list link
 * @head: Pointer to the first node of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	for (current = head; current != NULL;)
	{
		head = current->next;
		free(current->str);
		free(current);
		current = head;
	}
}
