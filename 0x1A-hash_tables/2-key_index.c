#include "hash_tables.h"

/**
 * key_index - Creates an index for a key.
 *
 * @key: Word to convert into ASCII.
 * @size: Size of the list.
 *
 *
 * Description - This program takes a key and converts it into index to
 *               accomodate in the hash table.
 *
 *
 *
 * Return: Unsigned long int, the index for the word.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb_2;

	djb_2 = hash_djb2(key);

	return (djb_2 % size);

}
