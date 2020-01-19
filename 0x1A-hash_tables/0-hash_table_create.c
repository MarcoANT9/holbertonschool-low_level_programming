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
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table == NULL)
		return (NULL);


	new_table->size = size;
	return (new_table);

}
