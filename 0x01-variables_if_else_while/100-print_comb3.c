#include <stdio.h>

/**
 * main - Print Combination V.3
 *
 * Description - Print all combinations of double-digit numbers w/o repetition.
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

		j = i + 1;

		while (j < 58)
		{

			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
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
