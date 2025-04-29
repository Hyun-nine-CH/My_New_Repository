#include <stdio.h>

int main(void) {
    int *arr1[5];
    int *arr2[3][5];

    int **parr1 = arr1; // *parr1은 포인터의 포인터, 2중 포인터
    int *(*parr2)[5] = arr2; // (*parr2)[5]은 배열의 포인터

    return 0;
}