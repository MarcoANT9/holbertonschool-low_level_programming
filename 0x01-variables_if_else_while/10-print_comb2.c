#include <stdio.h>

/**
 * main - Print Combination V.2
 *
 * Description - Prints all combinations of double-digit numbers.
 *
 * Return: Always Success (0)
 *
 */


int main(void)
{

	int i;
	int j;

	i = 48;

	while (i < 58)
	{

		j = 48;

		while (j < 58)
		{

			putchar(i);
			putchar(j);

			if (i != 57 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j += 1;
		}
		i += 1;
	}


	putchar('\n');

	return (0);

}
