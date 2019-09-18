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


	printf("Size of a char: %ld byte(s)\n", sizeof(cht));

	printf("Size of an int: %ld byre(s)\n", sizeof(itg));

	printf("Size of a long int: %ld byte(s)\n", sizeof(litg));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(llitg));

	printf("Size of a float: %ld byte(s)\n", sizeof(flt));


	return (0);

}
