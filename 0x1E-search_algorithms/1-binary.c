#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
    int left, right, middle;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;
    while (left <= right) {
        printf("Searching in array: ");
        print_array(array, left, right);
        middle = floor((left + right) / 2);
        if (array[middle] < value)
        {
            left = middle + 1;
        }
        else if (array[middle] > value)
        {
            right = middle - 1;
        }
        else
        {
            return (middle);
        }
    }
    return (-1);
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: starting index
 * @end: end index
 */
void print_array(const int *array, int start, int end)
{
	int i;

	i = start;
	while (array && i <= end)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
