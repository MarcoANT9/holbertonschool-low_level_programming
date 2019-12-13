#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the value of a node in an index.
 *
 * @head: First position in the list.
 * @index: Index to search.
 *
 * Description - This program will search for a value in a doble linked list
 *               given an index position.
 *
 * Return: → The address at index position on success.
 *         → NULL on failure.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int index_pos = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (index_pos < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		index_pos++;
	}

	if (index_pos != index)
		return (NULL);
	else
		return (tmp);



}
