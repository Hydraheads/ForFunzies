#include <stdio.h>
#include <stdlib.h>

int prod_array(int arr[], int max) {
    int prod = 1;
    for (int i = 0; i < max; i++) {
        prod = prod * arr[i];
    }
    return prod;
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int max = sizeof(arr) / sizeof(arr[0]);
    printf("The product of the array elements is %d \n", prod_array(arr, max));
    return 0;
}