#include <stdio.h>

/**
 * main - Print Combination
 *
 * Description - Prints all combinations of single-digit numbers.
 *
 * Return: Always Success (0)
 *
 */


int main(void)
{

	int i;


	for (i = 48; i < 58; i++)
	{

		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);

		}
	}


	putchar('\n');

	return (0);

}
