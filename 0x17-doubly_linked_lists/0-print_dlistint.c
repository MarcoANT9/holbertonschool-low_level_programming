#include "lists.h"

/**
 * print_dlistint - Prints the elements of a linked list
 *
 * @h: Head of the linked list.
 *
 * Description - This program takes a doubly linked list and prints its
 *               contents on the standard output.
 *
 * Return: → Number of nodes in success.
 *         → 0 if there is no list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t index = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		index++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
