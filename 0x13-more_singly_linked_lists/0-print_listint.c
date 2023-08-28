#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a listinit_t list
 * @head: pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *head)
{
	size_t n_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n_count++;
	}

	return (n_count);
}
int main(void)
{
	return (0);
}
