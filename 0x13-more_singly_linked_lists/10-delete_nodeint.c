#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node specified by index.
 *
 * @head: Head of the linked list.
 * @index: Index to search.
 *
 *
 * Description - This program will find the desired index and delete its node.
 *
 * Return: 1 if it success; 0 if it fails.
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node;
	listint_t *temp = *head;
	unsigned int pos = 0;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && pos < (index - 1))
	{
		temp = temp->next;
		pos++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next->next;

	free(temp->next);
	temp->next = next_node;
	return (1);
}
