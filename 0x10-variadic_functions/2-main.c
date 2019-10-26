#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings("...", 2, "Jay", "Django", "I'm Australian");
	print_strings(", ", "Gnrl Knbi", "This Guy", NULL, "Django");


	return (0);
}
