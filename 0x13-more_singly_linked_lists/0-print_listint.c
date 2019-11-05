#include "lists.h"
#include <stdio.h>


/**
 * print_listint - Counts and prints all the elements in a linked list.
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


size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{

		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);

}
