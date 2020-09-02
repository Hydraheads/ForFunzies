#include <stdio.h>
#include <stdlib.h>

int main() {
      int y;
    printf("Enter a hexadecimal integer: \n");
    scanf("%x", &y);
    printf("The hexadecimal value of y is %x and decimal is %d\n", y, y);

    return 0;
}