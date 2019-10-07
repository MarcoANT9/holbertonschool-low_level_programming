#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string
 * @c: Character to find
 *
 * Description - Search the first iteration of a character in a string, then
 *               returns a pointer to the location of said character.
 *
 * Return: → char pointer (s + char_pos) if char exist in string.
 *         → NULL if character does not exist in the string.
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	while (*(s) != '\0')
	{
		if (*(s) == c)
		{
			return (s);
		}

		s++;
		i++;

	}

	return ('\0');

}
