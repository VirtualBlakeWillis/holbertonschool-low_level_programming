#include "search_algos.h"

/**
 * advanced_binary - advanced binary search
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value looking for
 * Return: index where value is located, or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);
    return (recursive_binary_search(array, 0, (int)size - 1, value));
}

/**
 * recursive_binary_search - function that searches for a value in a sorted
 * array of integers, using recursion
 *
 * @array: pointer to the first element of the array to search in
 * @left: index of first value to look at in array
 * @right: index of last value to look at in array
 * @value: the value to search for
 * Return: index of the value if present in the array, otherwise -1
 */
int recursive_binary_search(int *array, int left, int right, int value)
{
    int mid = left + (right - left) / 2;

    if (!(right >= left))
        return -1;

    if (right == left && value == array[right])
		return (right);

    printf("Searching in array: ");
    print_array(array, left, right);

    if (value <= array[mid])
        return (recursive_binary_search(array, left, mid, value));
    return (recursive_binary_search(array, mid + 1, right, value));

}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
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
