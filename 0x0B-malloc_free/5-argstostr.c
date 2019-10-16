#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments in the input.
 *
 * @ac: Number of arguments on the input.
 * @av: String of inputs.
 *
 * Description - Takes all the arguments to the main and concatenates them
 *               in a single string using the new line ('\n') as separator.
 *
 * Return: → A pointer to the string containing the arguments.
 *         → NULL if an error ocurred during compiling.
 */

char *argstostr(int ac, char **av)
{
	int ind, i, j;
	int count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			j++;
		}
		count = count + j;
	}
	j = 0;
	str = malloc(sizeof(char) * (ac + count + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ind = 0;
		while (av[i][ind] != '\0')
		{
			str[j] = av[i][ind];
			ind++;
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}
