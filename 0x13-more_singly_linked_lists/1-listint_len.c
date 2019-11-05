#include "lists.h"



/**
 * listint_len - Counts the number of elements in a linked list.
 *
 * @h: Input linked list.
 *
 *
 * Description - This function counts the number of elements in a linked list
 *               and returns the number of existing elements within it. The
 *               variable type of the return value is unsigned long int.
 *
 * Return: Number of elements in the linked list.
 *
 */


size_t listint_len(const listint_t *h)
{
	size_t counter;

	while (h != NULL)
	{

		h = h->next;
		counter++;
	}

	return (counter);

}
