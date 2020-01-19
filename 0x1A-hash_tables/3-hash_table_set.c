#include "hash_tables.h"

/**
 * hash_table_set - Sets a key in a position inside a hash table.
 *
 * @ht: Pointer to the hash table.
 * @key: Key to position in the hash table.
 * @value: Value asignated to the key.
 *
 * Description - This program will take a key and set its space inside a hash
 *               table, with its correspondent value.
 *
 * Return: → 1 on success.
 *         → 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t **table_head, *new_node, *current_node;
	unsigned long int key_idx, hash_size = ht->size;

	if (ht == NULL || key == NULL)
		return (0);
	table_head = ht->array;
	key_idx = key_index((unsigned char *)key, hash_size);
	if (table_head[key_idx] != NULL)
	{current_node = table_head[key_idx];
		while (current_node->next != NULL)
		{
			if ((strcmp(current_node->key, key) == 0))
			{current_node->value = (char *)value;
				break;
			}
			current_node = current_node->next;
		}
		if ((strcmp(current_node->key, key) == 0))
			current_node->value = (char *)value;
		else
		{new_node = malloc(sizeof(hash_node_t));
			if (new_node == NULL)
				return (0);
			new_node->key = (char *)key;
			new_node->value = (char *)value;
			new_node->next = table_head[key_idx];
			table_head[key_idx] = new_node;
		}
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = (char *)key, new_node->value = (char *)value;
		new_node->next = NULL, table_head[key_idx] = new_node;
	}
	return (1);
}
