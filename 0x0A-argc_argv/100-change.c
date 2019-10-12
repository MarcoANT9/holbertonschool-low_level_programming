#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _mindiv - Returns the first non zero value in the division.
 *
 * @i: The number to divide.
 *
 * Description - This is an intermediate function, it returns the position
 *               where the value of i / money[j] is different from 0.
 *
 * Return: Position where the value of i / money[j] is different from 0.
 */

int _mindiv(int i)
{
	int money[5] = {25, 10, 5, 2, 1};
	int j = 0;


	while (j < 5)
	{
		if (i / money[j] == 0)
		{
			j++;
		}
		else
		{
			return (j);
		}
	}
	return (money[5]);

}

/**
 * main - Prints the minumul ammount of coins to make change for an amount of.
 *        money
 *
 * @argc: Count of arguments the function takes.
 * @argv: Array of pointers to the string of the arguments.
 *
 *
 * Description - This function takes a number (money) and divides it with an
 *               array of coins to make change for the minimum ammount of
 *               coins.
 *
 * Return: → 0 if successfull.
 *         → 1 if failure.
 */

int main(int argc, char *argv[])
{
	int money[5] = {25, 10, 5, 2, 1};
	int j, sum = 0;
	int rem;

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			rem = atoi(argv[1]);
			while (rem != 0)
			{
				j = _mindiv(rem);
				sum = sum + rem / money[j];
				rem = rem % money[j];
			}
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
