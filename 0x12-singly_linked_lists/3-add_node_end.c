#include "lists.h"
#include <string.h>


/**
 * add_node_end - Inserts a node at the end of a list.
 *
 * @head: Position of the head of the list.
 * @str: String to add at the beginning of the list.
 *
 * Description - This program takes a node and adds it at the ending of the
 *               linked list.
 *
 * Return: Address of the new element or NULL if failed.
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{

	int index = 0;
	list_t *added_node = malloc(sizeof(list_t));
	list_t *previous = *head;


	if (added_node == NULL)
		return (NULL);

	while (str[index] != '\0')
		index++;

	added_node->str = strdup(str);

	if (added_node->str == NULL)
		return NULL;


	added_node->len = index;
	added_node->next = NULL;

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

		return (*head);
	}
}
