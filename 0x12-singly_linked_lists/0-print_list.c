#include "lists.h"

/**
 * print_list - Prints a linked list.
 *
 * @h: List to be printed.
 *
 *
 * Description - This program takes a linked list and prints its elements.
 *
 * Return: Number of nodes.
 *
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	char *string;


	while (h != NULL)
	{
		string = h->str;
		if (string == NULL)
			string = "(nil)";

		printf("[%i] %s\n", h->len, string);
		h = h->next;
		counter++;
	}

	return (counter);

}
