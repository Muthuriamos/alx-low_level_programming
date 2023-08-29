#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end of the linked list
 * @head: Pointer to the first node of thr list
 * @str: string to add
 * Return: Address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
