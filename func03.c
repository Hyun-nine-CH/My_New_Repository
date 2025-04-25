#include <stdio.h>

int NumberCompare(int num1, int num2);

int main(void) {
    printf("3과 4중에서 큰 수는 %d이다.\n", NumberCompare(3, 4));
    printf("5와 2중에서 큰 수는 %d이다.\n", NumberCompare(5, 2));
    return 0;
}

int NumberCompare(int num1, int num2) {
    return (num1 > num2) ? num1 : num2; // 리턴 값에 조건문이 참이면 : 왼쪽, 거짓이면 : 오른쪽
}