#include <stdio.h>

double power(int n) { // 2^n을 나타내는 함수를 power(n)으로 직접 구현
    if (n == 0)
        return 1.0; // 무한 증식 또는 수렴을 방지하기 위한 기저조건
    else if (n > 0)
        return 2.0 * power(n - 1); // 멱급수 개념과 원리를 구현
    else
        return 1.0 / power(-n); // 음의 정수인 경우도 포함
}

int main(void) {
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    double result = power(n);

    if (n >= 0)
        printf("2의 %d승은 %.0f\n", n, result); // 정수로 출력
    else
        printf("2의 %d승은 %.10f\n", n, result); // 실수로 출력
    return 0;
}