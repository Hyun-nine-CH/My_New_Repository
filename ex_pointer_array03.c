#include <stdio.h>

int main(void) {
    int *ptr1 = 0x0010;
    double *ptr2 = 0x0010;

    printf("%p %p \n", ptr1+1, ptr1+2);
    printf("%p %p \n", ptr2+1, ptr2+2);

    printf("%p %p \n", ptr1, ptr2);
    ptr1++;
    ptr2++;

    printf("%p %p \n", ptr1, ptr2);
    return 0; // int형은 4byte, double형은 8byte가 증가, char형은 1byte 증가, short형은 2byte 증가
}