#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with this rules:
 *        if the numeber is a multiple of:
 *                → 3 then print "Fizz"
 *                → 5 then print "Buzz"
 *                → 3 & 5 then print "FizzBuzz"
 *
 * Return: Always 0 (success)
 *
 *
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}

			else if (i % 5 == 0)
			{
				printf("Buzz");
			}

			else
			{
				printf("%d", i);
			}
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}

	putchar('\n');
	return(0);
}
