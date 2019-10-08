#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: String to search
 * @accept: Acceptable bytes
 *
 *
 *
 * Return: Pointer to matching byte
 *
 */


char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *ip = '\0';

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ip = &s[i];
				break;
			}
			j++;
		}
		if (ip != '\0')
		{
			break;
		}
		i++;
	}
	return (ip);
}
