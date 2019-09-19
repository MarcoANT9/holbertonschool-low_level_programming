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
	int k;
	int l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 57)
		{
			k = i;
			while (k < 58)
			{
				l = j + 1;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l
!= 57)
					{
						putchar(44);
						putchar(32);
					}
					l += 1;
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
