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

	i = 0;

	for (i = 0; i <= 99; i++)
	{

		for (j = 0; j <= 99; j++)
		{

			if (i < j)
			{

				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
