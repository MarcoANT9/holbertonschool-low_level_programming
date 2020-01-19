#include "hash_tables.h"

/**
 * hash_table_get - Gets the value of a key.
 *
 * @ht: The hash_table to get the info from.
 * @key: The key to search.
 *
 *
 * Description - This program takes a hash table and returns the value stored
 *               in the specified key.
 *
 *
 *
 * Return: → The value of the key if it exists.
 *         → NULL if the key does not exists.
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *current_node;

	if (key == NULL || ht == NULL)
		return (NULL);
	key_idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[key_idx] == NULL)
		return (NULL);

	current_node = ht->array[key_idx];
	while (current_node)
	{
		if (strcmp(key, current_node->key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
