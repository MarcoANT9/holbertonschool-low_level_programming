#include "lists.h"
#include <string.h>


/**
 * free_list - Frees a list from the memory.
 *
 * @head: Position of the head of the list.
 *
 * Description - This program takes a list and frees it from the memory.
 *
 * Return: Nothing (void).
 *
 */
void free_list(list_t *head)
{
	list_t *copi;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		copi = head->next;
		free(head->str);
		free(head);
		head = copi;
	}
}
