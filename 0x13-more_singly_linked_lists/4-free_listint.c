#include "lists.h"

/**
 * free_listint - Deallocates memory occupied by a linked list.
 * @head: Pointer to the beginning of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node; /* Temporary pointer to hold the next node. */

	while (head)
	{
		temp_node = head->next; /* Store the next node's address. */
		free(head); /* Deallocate memory for the current node. */
		head = temp_node; /* Move to the next node. */
	}
}
