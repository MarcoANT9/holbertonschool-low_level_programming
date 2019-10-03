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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
