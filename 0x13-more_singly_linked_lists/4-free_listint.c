#include "lists.h"


/**
 * free_listint - Frees a list from the memory.
 *
 * @head: Position of the head of the list.
 *
 * Description - This program takes a list and frees it from the memory.
 *
 * Return: Nothing (void).
 *
 */
void free_listint(listint_t *head)
{
	listint_t *copi;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		copi = head->next;
		free(head);
		head = copi;
	}
}
