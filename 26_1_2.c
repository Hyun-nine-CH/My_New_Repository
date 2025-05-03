#include <stdio.h>
#define PI 3.14
#define PRODUCT(R) ((R)*(R))
#define Area_Of_Circle(R) PRODUCT(R)*PI

int main(void) {
    double rad;
    printf("반지름 실수를 정의하세요: ");
    scanf("%lg", &rad);

    printf("원의 반지름 %g의 원의 넓이: %g \n", rad, Area_Of_Circle(rad));
    return 0;
}