#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t
 * @n: Value to be stored in the new node.
 * @head: pointer to the head of the list
 * Return: Adress of the new element ot NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == new_node)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

