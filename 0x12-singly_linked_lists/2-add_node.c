#include "lists.h"
#include <string.h>


/**
 * add_node - Inserts a node at the beginning of a list.
 *
 * @head: Position of the head of the list.
 * @str: String to add at the beginning of the list.
 *
 * Description - This program takes a string and adds it at the beginning
 *               of the linked list.
 *
 * Return: Address of the new element or NULL if failed.
 *
 */
list_t *add_node(list_t **head, const char *str)
{

	char *new_str = strdup(str);

	list_t *added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);

	added_node->len = strlen(new_str);
	added_node->str = new_str;
	added_node->next = *head;

	*head = added_node;

	return (*head);

}
