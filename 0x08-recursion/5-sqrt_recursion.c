#include "main.h"

/**
  * _sqrt_recursion - return sqrt of n
  * @n: input int
  * Return: int
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	return (isSqRoot(2, n));
}

/**
  * isSqRoot - return sqrt of n, but with a counter!
  * @i: counter
  * @n: input n
  * Return: i
  */

int isSqRoot(int i, int n)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	else
		return (isSqRoot(++i, n));
}
