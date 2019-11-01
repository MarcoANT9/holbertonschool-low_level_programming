#include "lists.h"
#include <string.h>


/**
 * free_list - Frees a list from the memory.
 *
 * @head: Position of the head of the list.
 *
 * Description - This program takes a list and frees it from the memory.
 *
 * Return: Nothing (void).
 *
 */
void free_list(list_t *head)
{

	int index = 0;
	list_t *added_node = malloc(sizeof(list_t));
	list_t *previous = *head


	if (added_node == NULL)
		return (NULL);

	while (str[index] != '\0')
		index++;

	added_node->str = strdup(str);
	added_node->len = index;
	added_node->next = NULL;


	while ((previous->next)->next != NULL)
	        free(previous->next);

	previous->next = added_node;

	return (previous);

}
