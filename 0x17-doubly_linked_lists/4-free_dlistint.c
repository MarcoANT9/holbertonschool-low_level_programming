#include "lists.h"

/**
 * free_dlistint - Frees a double linked list.
 *
 * @head: First position of the linked list.
 *
 * Description - This program will free all the elements of a double linked
 *               list.
 *
 * Return: Nothing (void).
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
