#include "lists.h"

/**
 * find_listint_loop - Locates the start of a loop in a linked list.
 * @head: The linked list to search for a loop.
 *
 * Return: Address of the node where the loop begins, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head; /* Slow-moving pointer. */
	listint_t *fast = head; /* Fast-moving pointer. */

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
