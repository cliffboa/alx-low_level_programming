#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 *
 * Description:
 *     This function traverses a linked list of type listint_t and returns
 *     the node at the given index. The function starts from the head node
 *     and iterates through the list until it reaches the specified index.
 *     If the index is greater than the number of nodes in the list,
 *     or if the list is empty, the function returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL); /* Return the node at the specified index, or NULL */
}

