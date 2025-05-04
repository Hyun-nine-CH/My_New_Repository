#include <stdio.h>
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define EQUIL(X, Y) X // 추후에 연구 필요

int main(void) {
    double X, Y;
    printf("두 실수를 입력하세요: ");
    scanf("%lg %lg", &X, &Y);
    #if MAX(X, Y)==X
        printf("더 큰 수는 %lg", MAX(X, Y));
    #elif
        printf("더 큰 수는 %lg", MAX(X, Y));
    #elif EQUIL(X, Y)==X
        printf("두 수는 %lg로 같은 수 입니다.", X);
    #endif
    return 0;
}