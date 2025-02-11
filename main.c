#include <stdio.h>
#include "math_utils.h"

int main() {

    printf("Square of 5: %.1f\n", square(5));
    printf("Cube of 5: %.1f\n", cube(5));
    printf("10 to the power of 3: %ld\n", power(10, 3));
    printf("Factorial of 10: %ld\n", factorial(10));
    printf("Total operations: %d\n", operation_count);
    return 0;
}
