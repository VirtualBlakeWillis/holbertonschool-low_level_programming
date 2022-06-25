#include "3-calc.h"
/**
  * main - runs a calculator!
  * @argc: number of arguments
  * @argv: array of input arguments
  * Return: 0 if works, exit status if not
  */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == op_div || op == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
