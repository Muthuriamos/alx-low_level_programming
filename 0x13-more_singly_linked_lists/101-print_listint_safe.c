#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: Pointer to the start of the list
 * Return: The number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cow, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cow = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (cow == cat)
		{
			cow = head;
			while (cow != cat)
			{
				nodes++;
				cow = cow->next;
			}

			return (nodes);
		}
		cow = cow->next;
		cat = (cat->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the listint_tlist
 *
 * Return: The numv=ber of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ring = 0;
	{
		nodes = looped_listint_len(head);

		if (nodes == 0)
		{
			for (; head != NULL; nodes++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
		}
		else
		{
			for (ring = 0; ring < nodes; ring++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
					}
					return (nodes);
					}
					}

