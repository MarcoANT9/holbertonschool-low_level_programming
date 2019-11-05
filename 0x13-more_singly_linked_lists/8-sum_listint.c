#include "lists.h"



/**
 * sum_listint - Sums all the elements in a list.
 *
 * @head: The first element of the linked list.
 *
 *
 * Description - This program will run throught a linked list and will sum
 *               all its elements.
 *
 *
 * Return: The sum of all the elements. Zero if the list is empty.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);

}
