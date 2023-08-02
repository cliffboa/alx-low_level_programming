#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* Initialize the new node with the given data */
	new->n = n;

	/* Set the new node to point to the current head of the list */
	new->next = *head;

	/* Update the head to point to the new node, making it the new first node */
	*head = new;

	return (new);
}

