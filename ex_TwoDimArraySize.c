#include <stdio.h>

int main(void) {
    int arr1[3][4];
    int arr2[7][9];
    printf("세로3, 가로4: %lu \n", sizeof(arr1)); // %d -> %lu 정수는 signed int도 존재하기 때문에 long + unsigned int로 바꾸는 걸 추천
    printf("세로7, 가로9: %lu \n", sizeof(arr2));
    return 0;
}