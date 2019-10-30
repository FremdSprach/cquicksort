//
// Created by rossetta on 2019/10/21.
//

#include "qsort.h"

/* print array in one line. */
void print_array(int array[], int array_size) {
    for (int i = 0; i < array_size; ++i) {
        if (i != array_size - 1) {
            printf("%d,", array[i]);
        } else {
            printf("%d\n", array[i]);
        }
    }
}

/* swap two numbers using pointers. */
static void swap2num(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* this partition function is used by quick sort function. */
static int partition(int array[], int low, int high) {
    int i = low;
    for (int j = low; j < high; ++j) {
        if (array[j] <= array[high]) {
            swap2num(array + i, array + j);
            i++;
        }
    }
    swap2num(array + i, array + high);
    return i;
}

/* implement quick sort with partition. */
void qsort(int array[], int low, int high) {
    if (low < high) {
        int p = partition(array, low, high);
        qsort(array, low, p - 1);
        qsort(array, p + 1, high);
    }
}
