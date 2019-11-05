#include "lists.h"


/**
 * free_listint2 - Frees a list from the memory.
 *
 * @head: Position of the head of the list.
 *
 * Description - This program takes a list and frees it from the memory.
 *
 * Return: Nothing (void).
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *copi;

	while (head != NULL && *head != NULL)
	{
		copi = *head;
		*head = copi->next;
		free(copi);
	}
	head = NULL;
}
