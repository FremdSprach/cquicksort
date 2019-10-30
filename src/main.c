#include "qsort.h"

int main(void) {
    /* given a list of 100 numbers: 99, 98, ..., 0. */
    int array_size = 10;
    int array[array_size];
    for (int i = 0; i < array_size; ++i) {
        array[i] = array_size - i - 1;
    }
    print_array(array, array_size);

    /* apply quick sort to the list, expected result: 0, 1, 2, ..., 99. */
    qsort(array, 0, array_size - 1);
    print_array(array, array_size);

    return 0;
}