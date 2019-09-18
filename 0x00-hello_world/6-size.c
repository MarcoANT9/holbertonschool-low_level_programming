#include <stdio.h>

/**
 * main - Prints some type sizes
 *
 * Description - This program will print the size of various types on this
 * computer.
 *
 *
 * Return: Always 0 (Success)
 *
 *
 *
 */


int main(void)
{

	char cht;
	int itg;
	long litg;
	long long llitg;
	float flt;


	printf("Size of a char: %i byte(s)\n", (int) sizeof(cht));

	printf("Size of an int: %i byre(s)\n", (int) sizeof(itg));

	printf("Size of a long int: %i byte(s)\n", (int) sizeof(litg));

	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(llitg));

	printf("Size of a float: %i byte(s)\n", (int) sizeof(flt));


	return (0);

}
