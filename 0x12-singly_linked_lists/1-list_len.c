#include "lists.h"

/**
 * list_len - Returns the number of elements in the list.
 *
 * @h: List to get len.
 *
 *
 * Description - This program takes a linked list and counts how many
 *               elements it has.
 *
 * Return: Number of nodes.
 *
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;


	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);

}
