#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Pointer to the beginning of the list
 * Return: address of the node where the loop starts 
 * or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
