#include "lists.h"
#include <stdio.h>


/**
 * insert_nodeint_at_index - Adds a node at the desired index.
 *
 * @head: Head of the linked list.
 * @idx: Index to search.
 * @n: Value to add at the index.
 *
 *
 * Description - This program will find the desired index and add a new node.
 *
 * Return: Address of the new node. NULL if it fails.
 *
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index2 = 0;

	listint_t *tmp = *head, *tmp2 = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (tmp->next != NULL && index2 != idx)
	{
		index2++;
		tmp = tmp->next;
	}
	if (index2 != idx)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		index2 = index2 - 1;
		while (index2 > 0)
		{
			tmp2 = tmp2->next;
			index2--;
		}
		if (tmp2->next == NULL)
		{
			new_node->next = NULL;
			tmp2->next = new_node;
		}
		else
		{
			new_node->next = tmp2->next;
			tmp2->next = new_node;
		}
		return (new_node);
	}
}
