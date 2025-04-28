#include <stdio.h>

int main(void) {
    int arr[3]={0,1,2};
    printf("배열의 이름: %p \n", arr);
    printf("배열의 첫 번째 요소: %p \n", &arr[0]);
    printf("배열의 두 번째 요소: %p \n", &arr[1]);
    printf("배열의 세 번째 요소: %p \n", &arr[2]);
    // arr = &arr[0]; // 오류 발생
    return 0;
}