#include "hash_tables.h"

/**
 * free_table - Frees a table if something goes wrong.
 *
 * @array: Start of the list.
 *
 *
 * Description - Frees a hash table if something goes wrong.
 *
 * Return: Nothing (void)
 *
 */

void free_table(hash_node_t **array)
{
	hash_node_t *current;
	hash_node_t *tmp;

	current = *array;

	while (current->next != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	free(current);
}
/**
 * hash_table_create - Creates an empty hash table
 *
 * @size: The size of the hash table.
 *
 *
 *
 * Description - This program takes one argument, "size" and with it, creates
 *               a hash table in which all its elements are empty.
 *
 *
 *
 * Return: → A pointer to the newly created hash table on success.
 *         → A pointer to NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int index = 0;
	hash_node_t *new_node, *next_node;
	hash_table_t *head_table;

	head_table = malloc(sizeof(hash_table_t));
	if (head_table == NULL)
		return (NULL);
	head_table->size = size;
	if (size > 0)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			free(head_table);
			return (NULL);
		}
		head_table->array = &new_node;
		new_node->key = NULL;
		new_node->value = NULL;
		new_node->next = NULL;
	}
	else
		return (head_table);
	for (index = 0; index < size; index++)
	{
		next_node = malloc(sizeof(hash_node_t));
		if (next_node == NULL)
		{
			free_table(head_table->array);
			free(head_table);
			return (NULL);
		}
		new_node->next = next_node;
		next_node->key = "";
		next_node->value = "";
		next_node->next = NULL;
		new_node = next_node;
	}
	return (head_table);
}
