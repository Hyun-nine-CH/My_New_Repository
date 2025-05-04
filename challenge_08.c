#include <stdio.h>

double power(int n) { // power(n)는 2^n을 나타내는 함수이다.
    if (n == 0)
        return 1.0; // 자명하다.
    else if (n > 0)
        return 2.0 * power(n - 1);
    else
        return 1.0 / power(-n);
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