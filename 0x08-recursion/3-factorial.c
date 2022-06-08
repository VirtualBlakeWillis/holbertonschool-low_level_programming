#include "main.h"

/**
  * factorial - get factorial of n, recursivly!
  * @n: int
  * Return: int (factorial of n)
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);

}
