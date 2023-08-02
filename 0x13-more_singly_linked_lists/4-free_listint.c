#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the first node of the list to be freed.
 *
 * Description:
 *     This function frees all the nodes of a linked list of type listint_t.
 *     It iterates through the list and releases the memory allocated to each node.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

