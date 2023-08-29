#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node tp add to the new list
 * Return: Pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **nlist;
	size_t d;

	nlist = malloc(size * sizeof(listint_t *));
	if (nlist == NULL)
	{
		perror("malloc");
		exit(98);
	}

	for (d = 0; d < size - 1; d++)
		nlist[d] = list[d];
	nlist[d] = new;

	return (nlist);
}

/**
 * free_listint_safe - Frees a listint_t linked list
 * @head: Double pointer to the start of the list
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t num = 0;
	listint_t **list_ptr = NULL;
	listint_t *next;
	size_t d;


	if (head == NULL || *head == NULL)
		return (num);

	while (*head != NULL)
	{
		num++;

		list_ptr = _ra(list_ptr, num, *head);

		next = (*head)->next;
		free(*head);
		*head = next;

		for (d = 0; d < num - 1; d++)
		{
			if (*head == list_ptr[d])
			{
				free(list_ptr);
				return (num);
			}
		}
	}

	free(list_ptr);
	return (num);
}
