#include <stdio.h>

int Swap3(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
//    printf("inner function: a=%d, b=%d, c=%d\n", *a, *b, *c);
    return 0;
}

int main(void) {
    int n1 = 2;
    int n2 = 3;
    int n3 = 4;

    Swap3(&n1, &n2, &n3);
    printf("outer function: a=%d, b=%d, c=%d\n", n1, n2, n3);
    return 0;
}