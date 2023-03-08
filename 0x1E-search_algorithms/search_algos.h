#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int advanced_binary(int *array, size_t size, int value);
int recursive_binary_search(int *array, int left, int right, int value);
void print_array(const int *array, int start, int end, size_t size);

#endif