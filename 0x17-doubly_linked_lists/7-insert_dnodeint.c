#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index.
 *
 * @h: Head of the list.
 * @idx: Index to put the new element.
 * @n: Value to insert in the new element.
 *
 * Description - This program will take a double linked list and insert a
 *               new element in a given index.
 *
 * Return: → Address of the new element on success.
 *         → NULL on failure.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *previous_node, *new_node;

	if (h == NULL)
		return (NULL);


	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	idx--;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	current_node = (*h)->next;
	previous_node = (*h);

	while (idx > 0 && current_node != NULL)
	{
		current_node = current_node->next;
		previous_node = previous_node->next;
		idx--;
	}
	if (idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	if (current_node->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = current_node->prev;
	new_node->next = previous_node->next;
	previous_node->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
