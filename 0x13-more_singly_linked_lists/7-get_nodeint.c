#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index in a list.
 * @head: Pointer to the first node in the list.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* Counter for traversing nodes. */
	listint_t *temp = head; /* Temporary node pointer. */

	while (temp && i < index)
	{
		temp = temp->next; /* Move to the next node. */
		i++;
	}

	return (temp ? temp : NULL); /* Return the found node or NULL. */
}
