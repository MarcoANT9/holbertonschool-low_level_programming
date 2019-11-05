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

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *added_node = malloc(sizeof(listint_t));

	if (added_node == NULL)
		return (NULL);

	added_node->n = n; /** Asigns value of element */
	added_node->next = *head; /** Links it to the next element */

	*head = added_node; /** Links the head to the new element */

	return (head);

}
