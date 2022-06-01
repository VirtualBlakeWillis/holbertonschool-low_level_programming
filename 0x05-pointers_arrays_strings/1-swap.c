/**
  * swap_int - swaps input a's value with input b's value
  * @a: input a
  * @b: input b
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
