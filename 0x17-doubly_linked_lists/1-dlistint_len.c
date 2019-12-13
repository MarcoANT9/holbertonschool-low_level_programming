#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list
 *
 * @h: Head of the linked list.
 *
 * Description - This program will count the number of elements in a doubly
 *               linked list and returns it.
 *
 * Return: The number of elements in a doubly linked list.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t index = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
