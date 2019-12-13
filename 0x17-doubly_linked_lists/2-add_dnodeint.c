#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a list.
 *
 * @h: Header of the linked list.
 *
 *
 * Description - This program takes the address of a doubly linked list
 *               and adds a new node at the beginning of the list.
 *
 *
 * Return: → Address of the new element on success.
 *         → NULL on failure.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = (*head);
	new_node->n = n;
	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);

}
