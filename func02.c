#include <stdio.h>

int Add(int num1, int num2) {
    return num1 + num2;
}

void ShowAddResult(int num) {
    printf("덧셈 결과는 %d입니다.\n", num);
}

int ReadNu (void) {
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void) {
    printf("이 프로그램은 덧셈을 수행합니다.\n");
    printf("두 개의 정수를 입력하세요.\n");
}

int main(void) {
    int result, num1, num2;
    HowToUseThisProg();
    num1 = ReadNu();
    num2 = ReadNu();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}