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

	char a[100] = "abcdefghijklmnopqrstuvwxyz";
	char A[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	int i;


	for (i = 0; i < 26; i++)
	{

		putchar(a[i]);

	}

	for (i =0; i < 26; i++)
	{

		putchar(A[i]);

	}

	putchar('\n');

	return (0);

}
