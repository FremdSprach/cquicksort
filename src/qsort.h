//
// Created by rossetta on 2019/10/21.
//
#include <stdio.h>

#ifndef QUICK_SORT_QSORT_H
#define QUICK_SORT_QSORT_H

void print_array(int array[], int array_size);

static void swap2num(int *a, int *b);

static int partition(int array[], int low, int high);

void qsort(int array[], int low, int high);

#endif //QUICK_SORT_QSORT_H
