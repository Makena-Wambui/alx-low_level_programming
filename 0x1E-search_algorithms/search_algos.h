#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int low, int high);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
#endif
