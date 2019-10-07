#include "holberton.h"

/**
 * _memset - Sets the memory to a constant byte
 *
 * @s: Pointer to the memory to set
 * @b: Byte to place on the memory
 * @n: Number of bytes of the memory to set
 *
 * Description - This function sets n bytes of memory, starting from the point
 *               at s, with the character b.
 *
 * Return: Character pointer (s)
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
