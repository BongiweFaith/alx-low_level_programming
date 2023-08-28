#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index in a linked list.
 * @head: The first node in the linked list.
 * @index: The index of the desired node.
 *
 * Return: A pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0; /* Counter for the current index. */
	listint_t *temp_node = head; /* Temporary node pointer to traverse the list. */

	while (temp_node && current_index < index)
	{
		temp_node = temp_node->next; /* Move to the next node. */
		current_index++; /* Increment the current index. */
	}

	return (temp_node ? temp_node : NULL); /* Return the node at the given index or NULL if not found. */
}
