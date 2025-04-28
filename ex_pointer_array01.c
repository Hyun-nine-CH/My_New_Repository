#include <stdio.h>

int main(void) {
    int arr1[3] = {1, 2, 3};
    double arr2[3]={1.1, 2.2, 3.3};

    printf("%d %g \n", *arr1, *arr2); // 각각 arr1[0], arr2[0]를 가르킨다.
    *arr1+=100;
    *arr2+=120.5; // 포인터 변수를 연산하였다.
    printf("%d %g \n", arr1[0], arr2[0]);
    return 0;
}