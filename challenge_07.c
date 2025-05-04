#include <stdio.h>

int main(void) {
    int n;
    int k = 0;
    int value = 1; // 2^0

    printf("숫자 n 입력: ");
    scanf("%d", &n);

    while (value * 2 <= n) {
        value *= 2;  // 2의 거듭제곱 갱신
        k++;         // k 증가
    }

    printf("공식을 만족하는 k의 최댓값은 %d\n", k);
    return 0;
}