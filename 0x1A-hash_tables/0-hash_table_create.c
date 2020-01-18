#include "hash_tables.h"

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
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(head_table);
		return (NULL);
	}
	head_table->array = &new_node;
	new_node->key = "";
	new_node->value = "";
	new_node->next = NULL;
	for (index = 0; index < size; index++)
	{
		next_node = malloc(sizeof(hash_node_t));
		if (next_node == NULL)
			return (NULL);
		new_node->next = next_node;
		next_node->key = "";
		next_node->value = "";
		next_node->next = NULL;
		new_node = next_node;
	}
	return (head_table);
}
