#include "lists.h"



/**
 * add_nodeint - Adds a new element to the beginning of the list.
 *
 * @head: Beginning of the linked list.
 * @n: New element to add.
 *
 *
 * Description - This function takes the beginning of the list and adds a new
 *               node to it; then returns the address of the new element.
 *
 * Return: Address of the new added element.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *added_node = malloc(sizeof(listint_t));
	listint_t *previous = *head;

	if (added_node == NULL)
		return (NULL);


	added_node->n = n; /** Asigns value of element */
	added_node->next = NULL; /** Links it to the next element */

	if (*head == NULL)
	{
		*head = added_node;
		return (*head);
	}

	else
	{
		while (previous->next != NULL)
			previous = previous->next;

		previous->next = added_node;

	}

	return (added_node);

}
