#include <stdio.h>
/*
void SquareByValue(int num) {
    num = (num) * (num);
}
*/
int SquareByValue(int num) {
    num *= num;
    printf("Square By Value: %d\n", num);
    return num;
}

int SquareByReference(int *num) {
    *num *= *num;
    printf("Square By Reference: %d\n", *num);
    return *num;
}
/*
void SquareByReference(int *num) {
    *num = (*num) * (*num);
}
*/
int main(void) {
    int x = 4;

    SquareByValue(x);
    printf("y: %d\n", x);

    SquareByReference(&x);
    printf("y: %d\n", x);
    return 0;
}