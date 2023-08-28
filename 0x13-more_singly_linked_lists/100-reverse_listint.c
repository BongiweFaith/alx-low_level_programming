#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 *
 * Return: A pointer to the new first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL; /* Pointer to the previous node. */
	listint_t *next_node = NULL; /* Pointer to the next node. */

	while (*head)
	{
		next_node = (*head)->next; /* Store the next node. */
		(*head)->next = previous; /* Update the next pointer to point to the previous node. */
		previous = *head; /* Move the previous pointer one step forward. */
		*head = next_node; /* Move the head pointer one step forward. */
	}

	*head = previous; /* Update the head pointer to the new first node (previously the last node). */

	return (*head); /* Return the new first node of the reversed list. */
}
