#include "lists.h"
/**
 * sum_listint - Return the sum of all the data (n) of a listint_t list
 * @head: Pointer to the head of the list
 * Return: The sum of all the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return sum;
}
