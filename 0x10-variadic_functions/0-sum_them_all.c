#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters.
 *
 * @n: Number of arguments that enter the function.
 *
 * Description - This function takes an arbitrary number of int arguments
 *               and returns the sum of them.
 *
 * Return: → The sum of all parameters.
 *         → If n = 0, returns 0.
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list num_list;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

        /** Start num_list for n arguments */
	va_start(num_list, n);

	/** Access all the arguments in num_list */
	while (i < n)
	{
		sum = sum + va_arg(num_list, int);
		i++;
	}

	/** Clean memory from num_list */
	va_end(num_list);

	return (sum);
}
