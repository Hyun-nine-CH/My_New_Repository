#include <stdio.h>

int main(void) {
    int input;
    int num=1;
    printf("정수 입력: ");
    scanf("%d", &input);

    while(input>0 && num<=input) {
        printf("Hello world! %d \n", num);
        num++;
    }
    return 0;
}