#include "holberton.h"

/**
 * _strcat - Concatenates 2 strings
 *
 * @dest: String to be concatenated
 * @src: Source to concatenate
 *
 *
 * Return: Pointer of the type char
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; /** Run through dest */
	int j = 0; /** Run through src */
	int a = *(dest + i); /** Pointer to every dest pos */
	int b = *(src + j); /** Pointer to every src pos */

	while (a != '\0') /** Finds a blank space in dest */
	{
		i = i + 1;
		a = *(dest + i);
	}

	while (b != '\0') /** This appends src to dest */
	{
		*(dest + i) = b;
		j += 1;
		b = *(src + j);
		i += 1;
	}

	return (dest);

}
