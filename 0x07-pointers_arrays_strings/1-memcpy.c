#include "holberton.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Memory of destiny
 * @src: Source to copy
 * @n: Number of bytes of the memory to copy
 *
 * Description - This function copies n bytes form the source and paste it in
 *               the destiny memory part.
 *
 * Return: A pointer (dest)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
