#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of alistint_t list
 * @n: integer to add to the list
 * @head: head of double pointer
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
