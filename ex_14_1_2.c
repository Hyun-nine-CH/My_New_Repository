#include <stdio.h>

void Swap3(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main(void) {
    int n1=10, n2=20, n3=30;
    Swap3(&n1, &n2, &n3);
    printf("%d %d %d \n", n1, n2, n3);
    return 0;
}