#include "holberton.h"

/**
 * _strspn - Gets the leng of a prefix substring
 *
 * @s: Main string
 * @accept: Prefix substring
 *
 *
 *
 * Return: Unigned integer
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int n;

	while (*(accept + k) != '\0')
	{
		k = k + 1;
	}

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == (*(accept + j)))
			{
				n++;
				break;
			}

			j++;

		}

		if (*(s + i) != (*(accept + j)))
		{
			break;
		}

		i++;

	}

	return (n);

}
