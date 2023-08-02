#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list of type listint_t.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		num_nodes++; /* Increment the node count */
		h = h->next; /* Move to the next node */
	}

	return (num_nodes); /* Return the total number of nodes in the list */
}

