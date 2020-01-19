#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: Hash table to delete.
 *
 *
 *
 * Description - This program takes a hash table and completely and uterly
 *               deletes it from existance.
 *
 *
 *
 * Return: Nothing (void).
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *crnt_node, *tmp_node;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			crnt_node = ht->array[idx];
			while (crnt_node)
			{
				tmp_node = crnt_node;
				free(tmp_node->key);
				free(tmp_node->value);
				crnt_node = crnt_node->next;
				free(tmp_node);
			}
		}

	}
	free(ht->array);
	free(ht);
}
