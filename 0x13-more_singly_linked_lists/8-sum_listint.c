#include "lists.h"
/**
 * sum_listint - Return the sum of all the adta (n) of a listint_t list
 * @head: Pointer to the head of the list
 * Return: The sum of all the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (listint_t *current = head; current != NULL; current = current->next)
	{
	sum += current->n;
	}

	return (sum);
}
