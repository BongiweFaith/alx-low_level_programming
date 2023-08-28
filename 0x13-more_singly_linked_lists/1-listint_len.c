#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A linked list of type listint_t to traverse.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0; /* Initialize a counter for nodes. */

	while (h)
	{
		node_count++; /* Increment the node counter. */
		h = h->next; /* Move to the next node. */
	}

	return (node_count); /* Return the total node count. */
}
