#include "holberton.h"

/**
 * _strncpy - Copies n characters of src to dest
 *
 * @dest: Destiny string
 * @src: Source string
 * @n: Number of characters to copy
 *
 *
 * Return: Character (dest)
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + i);
		i = i + 1;
		n = n - 1;
	}

	return (dest);

}
