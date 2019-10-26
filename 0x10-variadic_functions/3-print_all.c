#include "variadic_functions.h"


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
 * @c: Int to print.
 *
 * Return: Nothing (void).
 */
void prt_int(va_list c)
{

	printf("%i", va_arg(c, int));
}

/**
 * prt_float - Print a float.
 *
 * @c: Float to print.
 *
 * Return: Nothing (void).
 */
void prt_float(va_list c)
{

	printf("%f", va_arg(c, double));
}

/**
 * prt_string - Prints a string.
 *
 * @c: String to print.
 *
 * Return: Nothing (void).
 */
void prt_string(va_list c)
{
	char *p = va_arg(c, char *);

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

	int j = 0;
	int n = 0;
	va_list print_list;

	f_t formats[] = {
		{'c', prt_char},
		{'i', prt_int},
		{'f', prt_float},
		{'s', prt_string},
		{'\0', NULL}
	};


	va_start(print_list, format);

	while (format[j] != '\0')
	{
		n = 0;
		while (n < 4)
		{
			if (*(format + j) == formats[n]._format)
			{
				formats[n].f(print_list);

				if (format[j + 1] != '\0')
					printf(", ");
			}
			n++;
		}
		j++;
	}
	va_end(print_list);
	printf("\n");
}
