#include <stdio.h>

int main(void) {
    int num = 15;
    int num1 = -16;

    int result1 = num<<1;
    int result2 = num<<2;
    int result3 = num<<3;

    printf("1칸 이동 결과: %d \n", result1);
    printf("2칸 이동 결과: %d \n", result2);
    printf("3칸 이동 결과: %d \n", result3);
    printf("2칸 오른쪽 이동 결과: %d \n", num1>>2);
    printf("3칸 오른쪽 이동 결과: %d \n", num1>>3);
    return 0;
}