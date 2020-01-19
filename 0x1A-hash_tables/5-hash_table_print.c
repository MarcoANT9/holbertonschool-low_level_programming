#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: Hash table to print.
 *
 *
 *
 * Description - This program will print a hash table in the format:
 *               {'key':'value'}
 *
 *
 *
 *
 * Return: Nothing (void)
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *crnt_node;
	int first = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			crnt_node = ht->array[idx];
			if (first != 0)
				printf(", ");
			first++;
			while (crnt_node)
			{
				printf("\'%s\': \'%s\'", crnt_node->key,
				       crnt_node->value);
				if (crnt_node->next != NULL)
					printf(", ");
				crnt_node = crnt_node->next;
			}
		}

	}
	printf("}\n");

}
