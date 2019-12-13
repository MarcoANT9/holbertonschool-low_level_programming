#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list.
 *
 * @head: Header of the linked list.
 * @n: Value of the list.
 *
 * Description - This program takes the address of a doubly linked list
 *               and adds a new node at the end of the list.
 *
 *
 * Return: → Address of the new element on success.
 *         → NULL on failure.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);

}
