#include <stdio.h>

int main(void) {
    int num;
    printf("1이상 5이하의 정수 입력: ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("1입니다.\n");
            break;
        case 2:
            printf("2입니다.\n");
            break;
        case 3:
            printf("3입니다.\n");
            break;
        case 4:
            printf("4입니다.\n");
            break;
        case 5:
            printf("5입니다.\n");
            break;
        default:
            printf("1이상 5이하의 정수가 아닙니다.\n");
    }
    return 0;
}