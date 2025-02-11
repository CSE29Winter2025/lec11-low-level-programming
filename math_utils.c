#include "math_utils.h"

int operation_count = 0;

double square(double x) {
    operation_count++;
    return x * x;
}

double cube(double x) {
    operation_count++;
    return x * x * x;
}

long power(int base, int exponent) {
    operation_count++;
    long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

long factorial(int n) {
    operation_count++;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

