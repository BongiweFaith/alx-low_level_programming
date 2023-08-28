#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list.
 * @head: Pointer to the pointer of the first element in the list.
 *
 * Return: The data stored in the removed element,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node; /* Temporary pointer to hold the next node. */
	int data; /* To store the data from the removed node. */

	if (!head || !*head)
		return (0);

	data = (*head)->n; /* Store the data of the first node. */
	temp_node = (*head)->next; /* Store the next node's address. */
	free(*head); /* Deallocate memory for the current first node. */
	*head = temp_node; /* Move to the next node as the new first. */

	return (data);
}
