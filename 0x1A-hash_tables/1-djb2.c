#include "hash_tables.h"

/**
 * hash_djb2 - Creates a number to get a position in a hash table.
 *
 * @str: A pointer to a constant unsigned char.
 *
 *
 *
 *
 * Description - This program creates a number to place the elements in a hash
 *               table.
 *
 *
 *
 * Return: An unsigned long integer.
 *
 */
unsigned long int hash_djb2(const unsigned char *str)
{

	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);

}
