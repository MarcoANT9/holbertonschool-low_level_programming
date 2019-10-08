#include "holberton.h"

/**
 * _strstr - Finds a substring inside another one
 *
 * @haystack: String to search in
 * @needle: String to search
 *
 * Description -
 *
 * Return: Pointer to haystack position of char needle
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle == '\0')
	{
		return (0);
	}
	while (needle[i])
	{
		i++;
	}
	if (i == 0)
	{
		return (&haystack[i]);
	}
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i - j]);
			}
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return ('\0');
}
