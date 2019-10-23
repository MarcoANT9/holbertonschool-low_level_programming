#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation asked by the user.
 *
 * @s: Operator passed as argument to the program.
 *
 * Description - This function selects the correct function from the
 *               avaliable ones to realize the correct operation.
 *
 * Return: Pointer to the function that corresponds to the operation asked
 *         by the user.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);


}
