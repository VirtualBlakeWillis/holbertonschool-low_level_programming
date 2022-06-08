#include "main.h"

/**
  * is_prime_number - checks if its a prime number, only kinda
  * @n: number to check
  * Return: 1 or 0
  */

int is_prime_number(int n)
{
	if ((n % 2) == 0)
		return (0);
	else if ((n % 3) == 0 && n != 3)
		return (0);
	else if ((n % 5) == 0 && n != 5)
		return (0);
	else if ((n % 7) == 0 && n != 7)
		return (0);
	else if ((n < 0) || n == 1)
		return (0);
	else
		return (1);
}
