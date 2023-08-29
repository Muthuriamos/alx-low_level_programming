#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the head of r=the list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next_node;
	}

	*head = current;

	return (*head);
}
