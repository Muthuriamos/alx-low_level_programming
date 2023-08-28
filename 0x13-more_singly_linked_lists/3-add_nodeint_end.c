#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t
 * @value : Value to be stored in the new node.
 * @head_ptr: pointer to the head of the list
 * Return: Adress of the new element ot NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head_ptr, const int value)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}

	new_node->n = value;
	new_node->next = NULL;

	if (((*head_ptr) == new_node))
	{
		*head_ptr = new_node;
	}
	else
	{
		temp = *head_ptr;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
	}
	return (new_node);
}

