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
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (n);
}
