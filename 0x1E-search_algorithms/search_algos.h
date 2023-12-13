#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H


#include <stdio.h>
#include <stddef.h>
#include <math.h>


int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);

#endif  /* search_algos */
