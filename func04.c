#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void) {
    int num1, num2;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d중 절대값이 큰 수는 %d입니다.\n", num1, num2, AbsoCompare(num1, num2));
    return 0;
}

int AbsoCompare(int num1, int num2) {
    return (GetAbsoValue(num1) > GetAbsoValue(num2)) ? num1 : num2;
}

int GetAbsoValue(int num) {
    return (num < 0) ? -num : num;
}