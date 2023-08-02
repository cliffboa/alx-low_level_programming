#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to a pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted,
 *         or 0 if the list is empty.
 *
 * Description:
 *     This function deletes the first node (head) of a linked list
 *     of type listint_t. It frees the memory of the head node and
 *     updates the head pointer to point to the next node in the list.
 *     If the list is empty (head is NULL), it returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n; /* Save the data of the head node */
	temp = (*head)->next; /* Store the next node in a temporary pointer */
	free(*head); /* Free the head node */
	*head = temp; /* Update the head to point to the next node */

	return (num); /* Return the data of the deleted node */
}

