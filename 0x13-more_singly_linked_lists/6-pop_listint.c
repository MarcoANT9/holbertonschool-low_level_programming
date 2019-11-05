#include "lists.h"


/**
 * pop_listint - Deletes the head node.
 *
 * @head: Position of the head of the list.
 *
 * Description - This program takes a list and deletes the head node.
 *
 * Return: The value at the head node.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *copi;
	int value;

	if (head == NULL)
		return (0);

	else
	{

		copi = *head;

		value = copi->n;

		free(*head);

		*head = copi->next;

		return (value);
	}

}
