#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- Deletes the head node of a listint_t
 * @head: Pointer to the head of the list
 * Return: The data of the deleted head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int dat = 0;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (0);

	dat = temp->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (dat);
}
int main(void)
{
	return (0);
}
