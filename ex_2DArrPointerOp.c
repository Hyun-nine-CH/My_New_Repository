#include <stdio.h>

/*
int main(void) {
    int iarr[3];
    double darr[7];

    printf("%p \n", iarr+1);
    printf("%p \n", darr+1);
    return 0;
}
*/

/*
int main(void) {
    int a[10]={10,11,12,13,14,15};
    int *p=&a;
    printf("%p \n", p+2);
    printf("%p \n", p-3);
//    printf("%p \n", p*3); // 포인터는 주소가 아니라 요소를 가지고 계산을 합니다. 숫자랑 같은 선상에 있지 않다.
//    printf("%p \n", p/2); // 이것도 마찬가지, 증감 연산자는 자릿수 이동이기 때문에 가능하다.

    return 0;
}
*/

int main(void) {
    int arr1[3][2];
    int arr2[2][3];

    printf("arr1: %p \n", arr1);
    printf("arr1+1: %p \n", arr1+1);
    printf("arr1+2: %p \n", arr1+2);

    printf("arr2: %p \n", arr2);
    printf("arr2+1: %p \n", arr2+1);
    return 0;
}