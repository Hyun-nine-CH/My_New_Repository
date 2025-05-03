#include <stdio.h>

#define ADD(X, Y, Z) ((X)+(Y)+(Z))
#define PRODUCT(X, Y, Z) ((X)*(Y)*(Z))

int main(void) {
    int X, Y, Z;
    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &X, &Y, &Z);

    printf("더한 값: %d \n", ADD(X, Y, Z));
    printf("곱한 값: %d \n", PRODUCT(X, Y, Z));

    return 0;
}