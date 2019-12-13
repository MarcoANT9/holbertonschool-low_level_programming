#include "lists.h"

/**
 * delete_ndodeint_at_index - Deletes a node in a given index.
 *
 * @head: Beginning of the list.
 * @index: Index to delete element.
 *
 *
 * Description - This program takes a double linked list and eliminates an
 *               element in a given index.
 *
 * Return: → 1 if the process was a success.
 *         → -1 if the process was not a success.
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = (*head), *tmp_next, *tmp_prev;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp_next = tmp->next;
			tmp_next->prev = NULL;
		}
		free(tmp);
		(*head) = tmp_next;
		return (1);
	}

	while (index > 0 && tmp->next != NULL)
	{
		tmp = tmp->next;
		index--;
	}
	if (index != 0)
		return (-1);

	if (tmp->next == NULL)
	{
		tmp_prev = tmp->prev;
		tmp_prev->next = NULL;
	}
	else
	{
		tmp_prev = tmp->prev;
		tmp_prev->next = tmp->next;
		tmp_next = tmp->next;
		tmp_next->prev = tmp->prev;
	}

	free(tmp);
	return(1);

}
