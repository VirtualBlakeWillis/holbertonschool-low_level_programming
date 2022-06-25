#include "3-calc.h"
/**
  *
  */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2;
	
	if (argc != 4)
	{
		printf("Error 1\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error 2\n");
		exit(99);
	}
	if ((op == op_div || op == op_mod) && num2 == 0)
	{
		printf("Error 3\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
