#include <stdio.h>
/**
 * main - Prints alphabet
 *
 * Description - This function prints all the alphabet it lowercase.
 *
 * Return: Always Success (0)
 *
 */


int main(void)
{

	char a[100] = "abcdfghijklmnoprstuvwxyz";

	int i;


	for (i = 0; i < 24; i++)
	{

		putchar(a[i]);

	}

	putchar('\n');

	return (0);

}
