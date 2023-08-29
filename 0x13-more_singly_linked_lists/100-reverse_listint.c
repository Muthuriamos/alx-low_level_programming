#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the head of r=the list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	listint_t *prev = NULL;

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
