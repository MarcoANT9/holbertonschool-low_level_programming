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

	hash_node_t *new_node;
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
	return (head_table);

}
