#include <stdio.h>

int main() {
    char name[50];
    char message[100];

    printf("이름 입력: ");
    scanf("%s", name);  // 공백 전까지만 읽음

    getchar();  // 버퍼 비움

    printf("메시지 입력 (공백 포함 가능): ");
    scanf("%[^\n]", message);  // 개행 전까지 전체 읽기

    printf("안녕하세요, %s님. 입력한 메시지는: \"%s\"\n", name, message);
    return 0;
}
