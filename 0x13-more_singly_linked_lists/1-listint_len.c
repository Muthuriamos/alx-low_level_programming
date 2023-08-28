#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @head: pointer to the first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count++;

		head = head->next;
	}
	return (count);
}
/**
 * main - start code
 * Return: always 0.
 */
int main(void)
{
	return (0);
}
