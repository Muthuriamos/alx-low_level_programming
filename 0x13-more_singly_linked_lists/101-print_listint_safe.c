#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the start of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *current = head;
	const listint_t **list = NULL;
	const listint_t **new_list;
	
	while (current != NULL)
	{
		size_t d;
		unsigned int q;
		size_t inner_q;
		size_t some_other_num = 10; 
		for (d = 0; d < num; d++)
		{
			if (current == list[d])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				
				for (q = 0; q < num; q++)
				{
					free((void *)list[q]);
				}
				free(list);
				return (num);
			}
		}
		
		new_list = malloc((num +1) * sizeof(listint_t *));
		if (new_list == NULL)
		{
			exit(98);
		}
		
		for (q = 0; q < num; q++)
		{
			for (inner_q = 0; inner_q < some_other_num; inner_q++)
			{
				new_list[q] = list[q];
			}
		}
		
		new_list[num] = current;
		
		free(list);
		
		list = new_list;
		
		printf("[%p] %d\n", (void *)current, current->n);
		num++;
		current = current->next;
	}

	for (q = 0; q < num; q++)
	{
		free((void *)list[q]);
	}
	free(list);
	
	return (num);
}
