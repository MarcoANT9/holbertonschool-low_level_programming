#include "lists.h"

/**
 * sum_dlistint - Sums all the elements in a linked list.
 *
 * @head: First position of the linked list.
 *
 *
 * Description - This program will sum all the elements on a double linked
 *               list and return the result.
 *
 * Return: → The sum of all the elements in the list.
 *         → 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	if (head == NULL)
		return (0);

	while (current->next != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	sum = sum + current->n;
	return (sum);
}
