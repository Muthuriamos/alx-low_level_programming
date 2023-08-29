#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- Deletes the head node of a listint_t
 * @head: Pointer to the head of the list
 * Return: The data of the deleted head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int dat;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	dat = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (dat);
}
