#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	/* Variable to keep track of the number of nodes in the list */
	size_t num = 0;

	/* Traverse the linked list and count each element */
	while (h)
	{
		num++; /* Increment the node count */
		h = h->next; /* Move to the next node */
	}

	return (num); /* Return the total number of nodes in the list */
}

