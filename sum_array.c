#include <stdio.h>
#include <stdlib.h>

int sum_arrayd(double arr[], int max) {
    int prod = 1;
    for (int i = 0; i < max; i++) {
        prod = prod + arr[i];
    }
    return prod;
}

int main() {
    double arr[] = {3.14, 72.6, 45, -13.8};
    int max = sizeof(arr) / sizeof(arr[0]);
    printf("The sum of the array elements is %d \n", sum_arrayd(arr, max));
    return 0;
}