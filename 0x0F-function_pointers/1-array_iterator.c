#include "function_pointers.h"
/**
  * array_iterator - call function n times, where n is size of array
  * @array: values to pass into function
  * @size: size of array
  * @action: function to call
  * Return: end func if input is null
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
