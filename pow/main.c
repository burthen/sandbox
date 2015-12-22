#include "pow.h"
#include <time.h>
#include <stdio.h>

const int C_VALUE = 2;
const int C_DEGREE = 1010;

void count_time(power_func great_power) {
    clock_t begin = clock();

    double res = (*great_power)(C_VALUE, C_DEGREE);
    printf("%d^%d = %.f\n", C_VALUE, C_DEGREE, res);

    clock_t end = clock();
    double elapsed_secs = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("time: %f\n ----\n", elapsed_secs);
}

int main() {
    power_func func_array[] = { &power_i, &power_r, &power_l };
    char char_array[][12] = { "power iter", "power rec", "power log" };

    long unsigned int array_len = sizeof(func_array) / sizeof(power_func);
    long unsigned int idx = 0;
    for (; idx < array_len; ++idx)
    {
        printf("%s\n", char_array[idx]);
        count_time(func_array[idx]);
    }

    return 0;
}
