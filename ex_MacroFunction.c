#include <stdio.h>
#include <math.h>
#define SQUARE(X) ((X)*(X))

int main(void) {
    int num=120 / (int)SQUARE(sqrt(6.0));

    printf("Square of num: %d \n", SQUARE(num));
    printf("Square of -5: %d \n", SQUARE(-5));
    printf("Square of 2.5: %g \n", SQUARE(2.5));
    
    printf("Square of 3+2: %d \n", SQUARE(3+2)); // 3+2*3+2 = 3+6+2 = 11
    return 0;
}