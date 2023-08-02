/* 0-print_listint.c
 *
 * Description: Function that prints all the elements of a linked list of type listint_t.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

