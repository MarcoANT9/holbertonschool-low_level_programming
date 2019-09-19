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
	int k;

	i = 48;

	while (i < 56)
	{

		j = i + 1;

		while (j < 57)
		{
			k = j + 1;


			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
				k += 1;
			}
			j += 1;
		}
		i += 1;
	}

	putchar('\n');
	return (0);

}
