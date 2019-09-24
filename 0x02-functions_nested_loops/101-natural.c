#include <stdio.h>
#include "holberton.h"

/**
 * main - sums all natural numbers bellow 1024 that are multiplies of 3
 * or 5
 *
 *
 * Return: Always 0 (success)
 *
 *
 *
 */

int main(void)
{

	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;

		}



	}
	printf("%d\n", sum);

}
