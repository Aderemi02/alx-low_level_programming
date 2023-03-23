#include "3-calc.h"
/**
 * main - main function to print arthmetric operation
 * @argc: list of arguement
 * @argv: array of pointer to argc list
 * Return: calculated result
 */

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	int (*operator)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	op = (*argv[2]);
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = operator(num1, num2);

	printf("%d\n", calc);

	return (0);
}
