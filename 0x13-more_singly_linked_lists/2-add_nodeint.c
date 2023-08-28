#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - node at the beginning of alistint_t list
 * @data: integer to add to the list
 * @head_ptr: head of double pointer
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head_ptr, const int data)
{
	listint_t *new_node;

	if (head_ptr == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = data;
	new_node->next = *head_ptr;
	*head_ptr = new_node;

	return (new_node);
}
