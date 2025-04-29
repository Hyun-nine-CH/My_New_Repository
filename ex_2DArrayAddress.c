#include <stdio.h>

int main(void) {
    int arr2d[3][3];
    printf("%p \n", arr2d); // 전체
    printf("%p \n", arr2d[0]); // 첫 번째 행
    printf("%p \n\n", &arr2d[0][0]);

    printf("%p \n", arr2d[1]);
    printf("%p \n\n", &arr2d[1][0]);

    printf("%p \n", arr2d[2]);
    printf("%p \n\n", &arr2d[2][0]);

    printf("sizeof(arr2d) = %lu \n", sizeof(arr2d));
    printf("sizeof(arr2d[0]) = %lu \n", sizeof(arr2d[0]));
    printf("sizeof(arr2d[1]) = %lu \n", sizeof(arr2d[1]));
    printf("sizeof(arr2d[2]) = %lu \n", sizeof(arr2d[2]));
    return 0;
}