#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_type - Structure for types.
 *
 * @_format: Input format.
 * @f: Function associated.
 *
 */

typedef struct format_type
{

	char *_format;
	void (*f)(va_list);

} f_t;

/** 3. Print all Functions */
void prt_char(va_list);
void prt_int(va_list);
void prt_float(va_list);
void prt_string(va_list);


/** Good ol' putchar */
int _putchar(char *s);


/** Returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);


/** Prints numbers received as parameters */
void print_numbers(const char *separator, const unsigned int n, ...);


/** Prints a series of strings */
void print_strings(const char *separator, const unsigned int n, ...);


/** PRINTS ANYTHING!!! */
void print_all(const char * const format, ...);


#endif
