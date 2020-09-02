#include <stdio.h>

int power(int a, int b) {
    //for (int i = 1; i < b; i++) {
    //     printf("%d\n", a*a);
    //  }
    int result = 1;
    while (b != 0) {
        result = result * a;
        --b;
        return result;
    }
    printf("The result is %d", result);
}

//int main() {
//  power(3, 4);
//}
