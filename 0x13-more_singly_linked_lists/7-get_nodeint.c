#include "lists.h"



/**
 * get_nodeint_at_index - Gets the indicated node.
 *
 * @head: Head of the linked list.
 * @index: Index to search.
 *
 *
 * Description - This program will search for a node indicated by the index
 *               and returns its address if it finds it or NULL if it doesn't.
 *
 * Return: Address of the indicated node. NULL if it fails.
 *
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index2;

	while (index2 < index)
	{
		if (head->next == '\0')
			return (NULL);

		head = head->next;
		index2++;
	}

	return (head);

}
