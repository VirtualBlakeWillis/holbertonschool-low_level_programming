/**
  * reverse_array - reverse values in *a
  * @n: number of elements in array
  * @a: array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int tmp, i;

	tmp = 0;
	n = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}

}
