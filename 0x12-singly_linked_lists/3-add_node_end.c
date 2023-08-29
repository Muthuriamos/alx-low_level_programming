#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node at the end of the linked list
 * @head: Pointer to the first node of the list
 * @str: String to add
 * Return: NULL if it fails / starting address of the list
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
}
list_t;

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node = NULL)
	{
		return (NULL);
	}\\nw_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	void print_list(list_t *head)
	{
		while (head !=NULL)
		{
			printf("[%ld] %s\n", strlen(head->str), head->str);
			head = head->next;
		}
	}

	int main(void)
	{
		list_t *head = NULL;

		add_node_end(&head, "Anne");
		add_node_end(&head, "Colton");
		add_node_end(&head, "Corbin");
		add_node_end(&head, "Daniel");

		print_list(head);

		while (head != NULL)
		{
			list_t *temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}

		return (0);
	}
}

