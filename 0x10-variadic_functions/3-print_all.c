#include "variadic_functions.h"
#include <string.h>

/**
 * prt_char - Prints a char.
 *
 * @c: Char to print.
 *
 * Return: Nothing (void).
 */
void prt_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * prt_int - Prints an int.
 *
 * @i: Int to print.
 *
 * Return: Nothing (void).
 */
void prt_int(va_list i)
{

	printf("%i", va_arg(i, int));
}

/**
 * prt_float - Print a float.
 *
 * @f: Float to print.
 *
 * Return: Nothing (void).
 */
void prt_float(va_list f)
{

	printf("%f", va_arg(f, double));
}

/**
 * prt_string - Prints a string.
 *
 * @s: String to print.
 *
 * Return: Nothing (void).
 */
void prt_string(va_list s)
{
	char *p = va_arg(s, char *);

	if (p != NULL)
		printf("%s", p);

	else
		printf("(nil)");

}

/**************************************************************************/

/**
 * print_all - Prints all the things!
 *
 * @format: Format of the things to print.
 *
 * Description - This program takes an arbitrary number of arguments and
 *               prints them regardless of the type..
 *
 * Return: Nothing (Void).
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	int n = 0;
	va_list print_list;

	f_t formats[] = {
		{'c', prt_char},
		{'i', prt_int},
		{'f', prt_float},
		{'s', prt_string},
	};

	i = strlen(format);
	va_start(print_list, format);

	while (j < i)
	{
		n = 0;
		while (n < 4)
		{
			if (*(format + j) == formats[n]._format)
			{
				formats[n].f(print_list);

				if (!((j + 1) == i))
					printf(", ");
			}
			n++;
		}
		j++;
	}
	va_end(print_list);
	printf("\n");
}
