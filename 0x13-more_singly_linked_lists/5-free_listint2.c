#include "lists.h"

/**
 * free_listint2 - Releases memory occupied by a linked list.
 * @head: Pointer to a pointer of the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node; /* Temporary pointer to hold the next node. */

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next; /* Store the next node's address. */
		free(*head); /* Deallocate memory for the current node. */
		*head = temp_node; /* Move to the next node. */
	}

	*head = NULL; /* Reset the head pointer to NULL. */
}
