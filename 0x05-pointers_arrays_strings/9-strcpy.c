#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed
 *           to by dest
 *
 *
 * @dest: Destination buffer
 * @src: Source buffer
 *
 *
 * Return: The pointer to dest
 *
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a = *(src + i);
	int j = 0;

	while (a != '\0')
	{
		i = i + 1;
		a = *(src + i);
	}

	while (j < i)
	{
		a = *(src + j);
		dest[j] = a;
		j = j + 1;
	}
	dest[j] = '\0';

	return (dest);
}
