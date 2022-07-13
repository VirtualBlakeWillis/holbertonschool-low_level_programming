/**
 * _pow - caluclate pow of number
 * @num: number base
 * @power: # of times to multiply
 * Return: total
 */

unsigned int _pow(int num, int power)
{
	unsigned int total = num;
	int i;

	if (power == 0)
		return (1);
	for (i = 1; i < power; i++)
	{
		total *= num;
	}

	return (total);
}
