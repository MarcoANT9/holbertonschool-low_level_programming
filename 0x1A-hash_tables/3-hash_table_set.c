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

	hash_node_t *new_node, *current_node;
	unsigned long int key_idx, hash_size = ht->size;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);
	key_idx = key_index((const unsigned char *)key, hash_size);
	current_node = ht->array[key_idx];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (current_node != NULL)
	{
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) == 0)
			{
				strcpy(current_node->value, value);
				return (1);
			}
			current_node = current_node->next;
		}
	}
	new_node->next = current_node;
	ht->array[key_idx] = new_node;
	return (1);
}
