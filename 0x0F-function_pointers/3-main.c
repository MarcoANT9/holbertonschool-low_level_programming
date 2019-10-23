#include "3-calc.h"

/**
 * main - Operates two numbers.
 *
 * @argc: Number of arguments to main.
 * @argv: Array of arguments to main.
 *
 * Description - Takes two numbers and an operator to realize the operation
 *               requested by the operator.
 *
 * Return: Always Successfull (0).
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	oper = get_op_func(argv[2]);

	if (oper == NULL)
	{
		printf("Error");
		exit(99);
	}

	result = oper(num1, num2);
	printf("%d\n", result);

	return (0);
}
